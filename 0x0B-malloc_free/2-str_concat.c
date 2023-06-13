#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into one
 * @s1: the first string
 * @s2: the second string
 * Return: returns the concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len_one = 0, len_two = 0;
	int i = 0, j = 0;

	s1 = !s1 ? "" : s1;
	s2 = !s2 ? "" : s2;

	while (s1[len_one] != '\0')
		len_one++;
	while (s2[len_two] != '\0')
		len_two++;

	result = malloc((sizeof(char) * len_one) + (sizeof(char) * len_two + 1));
	if (!result)
		return (NULL);

	while (s2[j] != '\0')
	{
		while (s1[i] != '\0' && i < len_one)
		{
			result[i] = s1[i];
			i++;
		}
		result[i] = s2[j];
		i++;
		j++;
	}

	result[i] = '\0';

	return (result);
}
