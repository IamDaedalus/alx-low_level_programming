#include "main.h"

/**
 * _put_recursion - recursively prints each char in a str
 * @s: the string to work on
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);

		_puts_recursion(++s);
	}
}
