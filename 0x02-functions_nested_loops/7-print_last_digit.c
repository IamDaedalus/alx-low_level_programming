#include "main.h"

/**
  * print_last_digit - this prints the last digit of a given number
  * @n: the incoming number
  * Return: returns the last digit in a number
  */
int print_last_digit(int n)
{
	int k;

	if (n < 0)
	{
		k = -1 * (n % 10);
		_putchar(k + '0');
		return (k);
	}
	else
	{
		k = n % 10;
		_putchar(k + '0');
		return (k);
	}
}
