#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concats two strings dynamically using malloc
  * @s1: the first str
  * @s2: the second str
  * @n: the length of the second str to use
  * Return: returns a ptr to the final string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	/* get the length of both strings ans setup iterator */
	unsigned int s1_len = get_str_len(s1), s2_len = get_str_len(s2);
	unsigned int i, j;

	if (n < s2_len)
	{
		/*ptr = malloc((s1_len + n));		 allocate for first str and n */
		ptr = malloc(sizeof(s1) + n);

		/* the var i is the index of the return pointer don't forget */
		for (i = 0; i < s1_len; i++)
			ptr[i] = s1[i];

		for (j = 0; j < n; j++)
		{
			ptr[i] = s2[j];
			/* we update i below to update the return ptr index */
			i++;
		}
	}
	else if (n >= s2_len)
	{
		/* ptr = malloc((s1_len + s2_len)); */
		ptr = malloc(sizeof(s1) + sizeof(s2));

		for (i = 0; i < s1_len; i++)
			ptr[i] = s1[i];

		for (j = 0; j < n; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}

	return (ptr);
}

/**
  * get_str_len - returns the length of a str
  * @str: the string to check length of
  * Return: returns the length of the str in int
  */
int get_str_len(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	return (i);
}
