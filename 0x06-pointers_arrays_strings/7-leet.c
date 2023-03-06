#include "main.h"

/**
  * leet - turns the input into leet
  * @str: the incoming text
  * Return: returns the leet code
  */
char *leet(char *str)
{
	int i = 0, k;

	char key[] = "aAeEoOtTlL";
	char map[] = "4433007711";

	while (str[i] != '\0')
	{
		for (k = 0; k <= 9; k++)
		{
			if (key[k] == str[i])
			{
				str[i] = map[k];
			}
		}
		i++;
	}

	return (str);
}
