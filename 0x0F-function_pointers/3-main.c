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
		printf("Error... not enough args\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];

		/* check if the operator actually exists or if it is a valid string */
	if (get_op_func(operator) == NULL)
	{
		printf("Error... operator not supported\n");
		exit(EXIT_FAILURE);
	}

	/**
	  * checks to make sure the user doesn't get away with dividing
	  * or doing mod work with 0. the reason is it returns an error
	  * so we just send our own error message
	  */
	if ((*operator == '%' || *operator == '/') && (a == 0 || b == 0))
	{
		printf("Error... division or mod by 0 not allowed\n");
		exit(98);
	}

	final = get_op_func(operator)(a, b);
	printf("%d\n", final);

	return (0);
}
