#include "main.h"

/**
  * _strncpy - copies from src str up to n bytes and zeroes the rest
  * @dest: the destination str
  * @src: the source str
  * @n: the length of the bytes
  * Return: returns the new str
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
