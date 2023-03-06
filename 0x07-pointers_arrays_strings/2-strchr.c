#include "main.c"

char *_strchr(char *s, char b)
{
	int i, len = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
	{
		if (s[i] == b)
			return (&s[i]);
	}

	return (NULL);
}
