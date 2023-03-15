#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concats two strings
  * @s1: teh first string to add
  * @s2: the second string
  * Return: the new string that is a result of s1+s2
  */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get the length of the two strings as usual */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* just a random thought but if char is 1 byte why do we need to check */
	/* the sizeof everytime? anyway... */
	/* we allocate both the lengths of the two str plus the end byte (+1) */
	str = malloc((sizeof(char) * len1) + (sizeof(char) * len2 + 1));
	/* always check if the malloc operation was successful */
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[i] != '\0'; j++)
	{
		str[j] = s2[j];
		/* painssssssssssssssssssssssssssss */
		i++;
	}

	/* the null terminating byte */
	str[i] = '\0';

	return (str);
}
