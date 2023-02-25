#include "main.h"

/**
  * print_numbers - prints from 0 to 9 and a new line
  */
void print_numbers(void)
{
	int k;

	k = 0;
	while (k < 10)
	{
		_putchar(k + '0');
		k++;
	}

	_putchar('\n');
}
