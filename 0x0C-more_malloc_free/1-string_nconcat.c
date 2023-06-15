#include "main.h"
#include <stdlib.h>

/**
 * copy_str_range - copies a range from a string to another
 * @from: the string to copy from
 * @to: the string to copy to
 * @to_index: the index of to that we insert the first copied character
 * @by: the range to copy to
 */
void copy_str_range(char *from, char *to, int to_index, int by)
{
	int i = 0, start = to_index;

	while (i < by)
	{
		to[start] = from[i];
		i++;
		start++;
	}
}

/**
 * string_nconcat - concatenates s1 and range of n letters from s2
 * @s1: the first string
 * @s2: the second string
 * @n: the length of n to copy; defaults to n or len of s2 if n > len of s2
 * Return: returns the new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	char *copy_one, *copy_two;
	unsigned int s1_len = 0, s2_len = 0;

	copy_one = !s1 ? "" : s1;
	copy_two = !s2 ? "" : s2;

	while (*copy_one != '\0')
	{
		s1_len++;
		copy_one++;
	}
	while (*copy_two != '\0')
	{
		s2_len++;
		copy_two++;
	}

	n = n >= s2_len ? s2_len : n;

	/* the size of char + len of s1 + n which is either n or len of s2_len */
	result = malloc(sizeof(char) * (s1_len + n + 1));
	if (!result)
		return (NULL);

	/* copy s1_len character from s1 to result starting at result[0] */
	copy_str_range(s1, result, 0, s1_len);
	/* copy n characters from s2 to result starting at result[s1_len] */
	copy_str_range(s2, result, s1_len, n);

	result[n + s1_len] = '\0';

	return (result);
}
