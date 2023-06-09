#include "main.h"

/**
  * _strspn - checks rhe length of a str substr
  * @s: the str to be checked
  * @accept: the substr to check for
  * Return: returns the lengrh of the str in bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	int i;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == *(accept + i))
			{
				result++;
				break;
			}
			else if (*(accept + (i + 1)) == '\0')
			{
				return (result);
			}
		}
		s++;
	}
	return (result);
}
