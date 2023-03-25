#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - the entry point of every C program
  * this main function acts like a simple calculator
  * @argc: the number of arguments on the command line
  * @argv: the arguments in char* format
  * Return: returns - for success
  */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;

	/* check for incorrect number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	/* check if the operator actually exists or if it is a valid string */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	/**
	  * checks to make sure the user doesn't get away with dividing
	  * or doing mod work with 0. the reason is it returns an error
	  * so we just send our own error message
	  */
	if ((*op == '%' || *op == '/') && (a == 0 || b == 0))
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	result = get_op_func(op)(a, b);
	printf("%d\n", result);

	return (0);
}
