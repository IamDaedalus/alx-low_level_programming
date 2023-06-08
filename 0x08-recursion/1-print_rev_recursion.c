#include "main.h"

/**
 * _print_rev_recursion - prints the reverse of a str recursively
 * @s: the str to print in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		/*
		 * something funny happens when we us ++s instead of s + 1
		 * also s++ results in a segfault
		 */
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
