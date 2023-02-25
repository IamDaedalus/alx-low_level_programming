#include "main.h"

/**
  * print_diagonal - prints a diagonal line with \
  * @n: the "length" of the diagonal line
  */
void print_diagonal(int n)
{
	int x, y;

	x = 0;
	while (n > 0)
	{
		y = x;
		while (y > 0)
		{
			_putchar(' ');
			y--;
		}
		_putchar('\\');
		_putchar('\n');
		x++;
		y--;
	}

	_putchar('\n');
}
