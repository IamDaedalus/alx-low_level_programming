#include "main.h"

/**
  * print_line - draws a line using _
  */
void print_line(int n)
{
	int k;

	k = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (k <= n)
		{
			_putchar('_');
			k++;
		}
	}
}
