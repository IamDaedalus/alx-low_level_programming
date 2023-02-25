#include "main.h"

/**
  * print_line - draws a line using _
  * @n: the length of the line
  */
void print_line(int n)
{
	int k;

	k = 0;
	while (k < n)
	{
		_putchar('_');
		k++;
	}
	_putchar('\n');
}
