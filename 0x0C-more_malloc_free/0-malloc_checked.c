#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - assigns a specified amount of memory
  *			to a ptr using malloc
  * @b: the amount of memory to allocate
  * Return: returns a successful pointer to the memory or further
  *			processing using the exit() function
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
