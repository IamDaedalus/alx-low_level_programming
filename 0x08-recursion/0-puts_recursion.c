#include "main.h"

/**
  * _puts_recursion - this prints a string and a new line
  * @s: the string to print
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
		/* the line below is similar to the resource video's */
		_puts_recursion(s++);
	}
}
