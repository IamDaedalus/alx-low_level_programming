#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints a variable list of args to the commandline
 * @seperator: the seperator to seperate the values
 * @n: the number of args
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	const char *out = seperator;

	va_start(list, n);
	if (n > 0)
	{
		while (i < n)
		{
			printf("%d", va_arg(list, int));

			/* check if i is not on the last arg before printing the seperator*/
			if (i != (n - 1) && out != NULL)
				printf("%s", out);

			i++;
		}
	}
	va_end(list);
	printf("\n");
}
