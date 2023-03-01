#include "main.h"

/**
  * print_rev - prints the reverse of the string
  * @str: the string to reverse
  */
void print_rev(char *str)
{
	int reverse, length;

	length = 0;
	/* same way we got the length in the prev source file */
	while (str[length] != '\0')
	{
		length++;
	}

	/* since we have the length, we can just countdown from there printing */
	for (reverse = length - 1; reverse >= 0; reverse--)
	{
		_putchar(str[reverse]);
	}

	_putchar('\n');
}
