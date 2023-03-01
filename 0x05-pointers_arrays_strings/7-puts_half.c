#include "main.h"

/**
  * puts_half - prints the second half of a string
  * @str: the string to split
  */
void puts_half(char *str)
{
	int i = 0, len, c;

	while (str[i] != '\0')
		len++;

	c = len % 2 == 0 ? len / 2 : (len - 1) / 2;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}

	_putchar('\n');
}
