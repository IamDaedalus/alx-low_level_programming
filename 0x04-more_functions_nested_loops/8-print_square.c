#include "main.h"

/**
  * print_square - prints a square with # of size n
  * @size: the size of the square
  */
void print_square(int size)
{
	int x, y;

	x = 0;
	if (size > 0)
	{
		while (x < size)
		{
			y = 0;
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
