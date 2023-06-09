#include "main.h"

/**
  * _strcpy - copies a string from one destination to another
  * @dest: the location to copy to
  * @src: the source to copy from
  * Return: returns the destination
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = src[i];

	return (dest);
}
