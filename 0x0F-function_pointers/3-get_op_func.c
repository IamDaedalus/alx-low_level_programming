#include "3-calc.h"
#include <stddef.h>

/**
  * get_op_func - this is a function pointer that contains a map
  * of every valid mathematical operator with its associated
  * function. it gets the operator in string format and makes
  * checks to see if there's an associated function for the operator
  * and returns null if there's none
  *
  * @s: the incoming operator in string format
  *
  * Return: returns the associated function of the operator if
  * successful else returns NULL
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	/* using this, iterate through every element of ops */
	int i = 0;

	while (i < 5)
	{
		/**
		  * this compares the char * of ops to see if they match
		  * and then returns the associated function pointer!
		  */
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
