#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a given string and returns it as new one
 * @str: the string to duplicate
 * Return: returns the duplicated string
 */
char *_strdup(char *str)
{
	char *result;
	int i = 0, str_len = 0;

	if (!str)
		return (NULL);

	while (str[str_len] != '\0')
		str_len++;

	result = malloc(sizeof(char) * (str_len + 1));
	if (!result)
		return (NULL);

	while (str[i])
	{
		result[i] = str[i];
		i++;
	}

	return (result);
}
