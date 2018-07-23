#include <stdio.h>
#include <stdlib.h>
#include <nnpack.h>

/* Import user configuration: */
#include <uk/config.h>

int main(int argc, char *argv[])
{
#if APPHELLOWORLD_PRINTARGS
	int i;

	printf("Arguments: ");
	for (i=0; i<argc; ++i)
		printf(" \"%s\"", argv[i]);
	printf("\n");
#endif
	size_t input_channels;
	size_t output_channels;
	struct nnp_size input_size;
	enum nnp_status status = nnp_status_success;
	void* input = malloc(input_channels * input_size.width * input_size.height * sizeof(float));
	printf("Hello world!\n");
}
