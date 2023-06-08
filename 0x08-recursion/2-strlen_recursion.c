#include "main.h"

/**
 * _strlen_recursion - prints the length of a str recursively
 * @s: the string to print its length
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	/*
	 * the last +1 is added recursively and returned
	 * s + 1 is actually pointing to the next byte in the
	 * string so it's only half of the whole _strlen_recursion
	 */
	return (_strlen_recursion(s + 1) + 1);
}
