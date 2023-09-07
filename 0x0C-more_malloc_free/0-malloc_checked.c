#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked-allocates memory using malloc
 * @b: integer whose memory is allocated.
 * Return:a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return (ptr);
}
