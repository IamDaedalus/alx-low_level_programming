#include "main.h"

/**
  * print_sign - prints the sign of the given number
  * @n: the incoming number
  * Return: this returns the numbers 0, 1 and -1
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
