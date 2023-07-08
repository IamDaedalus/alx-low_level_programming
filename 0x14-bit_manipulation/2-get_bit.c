#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets the bit at index
 * @n: the number in dec
 * @index: the index from which to get the bit
 * Return: the bit to get
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if (n > 0)
	{
		bit = (n >> index) & 1;
	}

	return (bit);
}
