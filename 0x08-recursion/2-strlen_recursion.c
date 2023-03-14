#include "main.h"

/**
  * _strlen_recursion - prints the length of a str using recursion
  * @s: the str to be checked
  * Return: returns the length of the str
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	/* count each letter and stack up the sum until the base condition is met */
	return (_strlen_recursion(s + 1) + 1);
}
