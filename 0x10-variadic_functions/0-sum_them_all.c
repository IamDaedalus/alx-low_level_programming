#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - takes in a variable amount of arguments of type int
 * and sums them all up
 * @n: the number of arguments passed to the function
 * Return: returns the sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list list;

	if (n > 0)
	{
		va_start(list, n);

		while (i < n)
		{
			sum += va_arg(list, int);
			i++;
		}
	}

	va_end(list);

	return (sum);
}
