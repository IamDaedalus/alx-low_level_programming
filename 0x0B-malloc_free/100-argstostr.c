#include "main.h"
#include <stdlib.h>

/**
  * argstostr - fucntion that concatenates all arguments of a program
  * @ac: the number of arguments
  * @av: the arguments in a 2D array of strs
  * Return: returns result
  */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = ac - 1;
	char *result;

	if (av == NULL || ac == 0)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	result = malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		if (result[k] == '\0')
			result[k++] = '\n';
	}

	return (result);
}

