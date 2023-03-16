#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
  * main - the entry point of every C program
  * @argc: the number of commandline arguments passed
  * @argv: string array of commandline arguments passed
  * Return: 0 for success
  */
int main(int argc, char *argv[])
{
	/* basically iterate through every argument */
	/* check if it's a number then compute */
	/* but if one is not, you immediately exit */
	/* with an error message */
	int cur_sum, c;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		cur_sum = 0;
		for (c = 1; c < argc; c++)
		{
			if (check_str(argv[c]) == 0)
			{
				cur_sum += atoi(argv[c]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", cur_sum);
	}

	return (0);
}

/**
  * check_str - iterate thru a str to check each for isdigit
  * @str: the string to be checked
  * side note: C89 doesn't have bool?? come maaaaaaaaan
  * Return: 1 for failure and 0 for success
  */
int check_str(char str[])
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
			return (1);
	}
	return (0);
}
