#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of n
 * @n: the number to convert
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar('0' + (n & 1));
}
