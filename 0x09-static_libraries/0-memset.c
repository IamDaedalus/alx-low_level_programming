#include "main.h"

/**
  * _memset - this fills a specified region with a constant byte
  * @s: the string to modify
  * @b: the char to insert
  * @n: the length of the region to fill
  * Return: the modified the string
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
