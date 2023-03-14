#include "main.h"

/**
  * _print_rev_recursion - this prints the str in reverse
  * @s: the string to be reversed
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		/* this works because the characters ar3 stacked eveey recursion call*/
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
