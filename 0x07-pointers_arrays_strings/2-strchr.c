#include "main.c"

char *_strchr(char *s, char b)
{
	while (*s != '\0')
	{
		if (*s == b)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
