#include "main.h"
#include <inttypes.h>
#include <stdlib.h>

/**
 * calc_args_len - calculates the length of each args
 * @ac: the total number of args
 * @av: the argv
 * Return: returns the length of each args
 */
int calc_args_len(int ac, char **av)
{
	int args_len = 0;
	int i, j;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			args_len++;
			j++;
		}
		args_len++;  /* Increment here to account for the '\n' character */
	}
	return (args_len);
}

/**
 * concat_args - concats each arg to str
 * @ac: the argc
 * @av: the argv
 * @str: the string to concat in
 */
void concat_args(int ac, char **av, char *str)
{
	int i, j;
	int str_pos = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[str_pos] = av[i][j];
			str_pos++;
			j++;
		}
		if (str[str_pos] == '\0')
			str[str_pos++] = '\n';
	}
}

/**
 * argstostr - prints each argument as seperate string
 * @ac: the args count
 * @av: the args vector
 * Return: one big string newline seperated based on args
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int result_len;

	if (ac == 0 || av == NULL)
		return (NULL);

	result_len = calc_args_len(ac, av);

	str = malloc(sizeof(char) * (result_len + 1));
	if (!str)
		return (NULL);

	concat_args(ac, av, str);

	return (str);
}
