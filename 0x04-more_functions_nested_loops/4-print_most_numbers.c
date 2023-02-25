#include "main.h"

/**
  * print_most_numbers - prints every number from 0 to 9 except 4 and 2
  */
void print_most_numbers(void)
{
	int k;

	k = 0;
	while (k < 10)
	{
		if (k != 2 || k != 4)
		{
			_putchar(k);
		}
		k++;
	}

	_putchar('\n');
}
