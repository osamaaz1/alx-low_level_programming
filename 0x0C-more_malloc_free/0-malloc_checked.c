#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory
 * if malloc fails, the malloc_checked function.
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
