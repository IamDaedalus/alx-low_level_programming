#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point for every C program
 * @argc: the number of cmdline args
 * @argv: each cmdline arg as a string
 * Return: returns 0 for success
 */
int main(int argc, char *argv[])
{
	int final, a, b;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];

		/* check if the operator actually exists or if it is a valid string */
	if (!get_op_func(operator) || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/**
	  * checks to make sure the user doesn't get away with dividing
	  * or doing mod work with 0. the reason is it returns an error
	  * so we just send our own error message
	  */
	if ((*operator == '/' || *operator == '%') && (a == 0 || b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	final = get_op_func(operator)(a, b);
	printf("%d\n", final);

	return (0);
}
