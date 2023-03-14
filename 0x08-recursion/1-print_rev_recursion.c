#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		/* this works because the characters ar3 stacked eveey recursion call*/
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}
