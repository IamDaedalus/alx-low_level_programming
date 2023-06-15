#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - simple malloc function
 * @n: number of bytes to allocate
 * Return: returns the memory space or exits with code 98 on failure
 */
void *malloc_checked(unsigned int n)
{
	void *result = malloc(n);

	if (!result)
		exit(98);
	else
		return (result);
}
