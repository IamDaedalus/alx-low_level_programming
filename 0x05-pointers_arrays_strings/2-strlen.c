#include "main.h"

/**
  * _strlen - get the length of the string
  * @s: the incoming string
  * Return: returns the length of the string
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
