#include "main.c"

/**
  * _strchr - finds the first occurence of a char in a str
  * @s: the str to check
  * @b: the character to check
  * Return: returns the char if found or null if not
  */
char *_strchr(char *s, char b)
{
	while (*s != '\0')
	{
		if (*s == b)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
