#include "main.h"

/**
  * _puts_recursion - this prints a string and a new line
  * @s: the string to print
  */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}

	_putchar('\n');
}
