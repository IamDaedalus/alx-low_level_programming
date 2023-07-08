#include "main.h"
#include <stdio.h>
#include <strings.h>

/**
 * set_bit - sets the bit at index to 1
 * @n: the number to convert
 * @index: the index whose bit we set to one
 * Return: returns the new value of n
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* works even if the bit pointed at is 1 */
	*n = *n | (1UL << index);

	return (1);
}
