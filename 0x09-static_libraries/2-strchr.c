#include "main.h"
#include <stddef.h>

/**
  * _strchr - finds the first occurence of a char in a str
  * @s: the str to check
  * @c: the character to check
  * Return: returns the char if found or null if not
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}


	return (NULL);
}
