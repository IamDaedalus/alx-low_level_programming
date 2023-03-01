#include "main.h"

/**
  * puts_half - prints the second half of a string
  * @str: the string to split
  */
void puts_half(char *str)
{
	int i;
	int c;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 1)
	{
		c = (i + 1) / 2;

		while (str[c] != '\0')
		{
			_putchar(str[c]);
			c++;
		}
	}
	else
	{
		c = (i / 2);

		while (str[c] != '\0')
		{
			_putchar(str[c]);
			c++;
		}
	}
	_putchar('\n');
}
