#include "main.h"
#include <stdlib.h>

/**
  * _strdup - duplicates a string with malloc and can be freed
  * @str: the string to be copied
  * Return: returns the new string
  */
char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	/* get the length of the str */
	while (str[len] != '\0')
		len++;

	/* we add +1 to account for the null byte at the end of a str */
	ptr = malloc(sizeof(char) * (len + 1));

	/* first rule of Fight Clu- I'm sorry I meant malloc, trust nobody */
	/* necessary check if the allocation fails or something */
	if (ptr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}

