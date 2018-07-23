/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Authors: Simon Kuenzer <simon.kuenzer@neclab.eu>
 *
 * Copyright (c) 2017, NEC Europe Ltd., NEC Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * THIS HEADER MAY NOT BE EXTRACTED OR MODIFIED IN ANY WAY.
 */

#include <uk/bus.h>
#include <uk/assert.h>
#include <uk/print.h>

struct uk_bus_list uk_bus_list;
static unsigned int bus_count;

void _uk_bus_register(struct uk_bus *b)
{
	UK_ASSERT(b != NULL);
	UK_ASSERT(b->probe != NULL);

	if (bus_count == 0)
		UK_TAILQ_INIT(&uk_bus_list);

	uk_printd(DLVL_EXTRA, "Register bus handler: %p\n", b);
	UK_TAILQ_INSERT_TAIL(&uk_bus_list, b, next);
	++bus_count;
}

void _uk_bus_unregister(struct uk_bus *b)
{
	UK_ASSERT(b != NULL);
	UK_ASSERT(bus_count > 0);

	uk_printd(DLVL_EXTRA, "Unregister bus handler: %p\n", b);
	UK_TAILQ_REMOVE(&uk_bus_list, b, next);
	bus_count--;
}

unsigned int uk_bus_count(void)
{
	return bus_count;
}

int uk_bus_init(struct uk_bus *b, struct uk_alloc *a)
{
	UK_ASSERT(b != NULL);

	uk_printd(DLVL_EXTRA, "Initialize bus handler %p...\n", b);
	if (!b->init)
		return 0;
	return b->init(a);
}


int uk_bus_probe(struct uk_bus *b)
{
	UK_ASSERT(b != NULL);
	UK_ASSERT(b->probe != NULL);

	uk_printd(DLVL_EXTRA, "Probe bus %p...\n", b);
	return b->probe();
}
