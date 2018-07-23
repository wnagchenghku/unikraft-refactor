/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Authors: Simon Kuenzer <simon.kuenzer@neclab.eu>
 *
 * Copyright (c) 2018, NEC Europe Ltd., NEC Corporation. All rights reserved.
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

#ifndef __UK_MUTEX_H__
#define __UK_MUTEX_H__

#include <uk/config.h>

#if CONFIG_LIBUKLOCK_MUTEX
#include <uk/assert.h>
#include <uk/plat/lcpu.h>
#include <uk/thread.h>
#include <uk/wait.h>
#include <uk/wait_types.h>
#include <uk/plat/time.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Mutex that relies on a scheduler
 * uses wait queues for threads
 */
struct uk_mutex {
	int locked;
	struct uk_waitq wait;
};

void uk_mutex_init(struct uk_mutex *m);

static inline void uk_mutex_hold(struct uk_mutex *m)
{
	unsigned long irqf;

	UK_ASSERT(m);

	for (;;) {
		uk_waitq_wait_event(&m->wait, m->locked == 0);
		irqf = ukplat_lcpu_save_irqf();
		if (!m->locked)
			break;
		ukplat_lcpu_restore_irqf(irqf);
	}
	m->locked = 1;
	ukplat_lcpu_restore_irqf(irqf);
}

static inline int uk_mutex_hold_try(struct uk_mutex *m)
{
	unsigned long irqf;
	int ret = 0;

	UK_ASSERT(m);

	irqf = ukplat_lcpu_save_irqf();
	if (!m->locked)
		ret = m->locked = 1;
	ukplat_lcpu_restore_irqf(irqf);
	return ret;
}

static inline void uk_mutex_release(struct uk_mutex *m)
{
	unsigned long irqf;

	UK_ASSERT(m);

	irqf = ukplat_lcpu_save_irqf();
	UK_ASSERT(m->locked);
	m->locked = 0;
	uk_waitq_wake_up(&m->wait);
	ukplat_lcpu_restore_irqf(irqf);
}

#ifdef __cplusplus
}
#endif

#endif /* CONFIG_LIBUKLOCK_MUTEX */

#endif /* __UK_MUTEX_H__ */
