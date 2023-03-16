#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - the entry point of every C program
  * @argc: the number of commandline arguments passed
  * @argv: string array of commandline arguments passed
  * Return: 0 for success
  */
int main(int argc, char *argv[])
{
	int a, b;

	/* right off the bat check if the arguments are the right amount */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", mul(a, b));
	}

	return (0);
}

/**
  * mul - multiplies two numbers
  * @a: the first
  * @b: the second
  * Return: returns the product of both numbers
  */
int mul(int a, int b)
{
	/* I didn't want to see the main.h file go to waste lol */
	return (a * b);
}
