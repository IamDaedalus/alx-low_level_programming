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
	if (n == 0)
		return;

	unsigned int i = 0;
	va_list list;
	const char *out = !seperator ? "" : seperator;

	va_start(list, n);

	while (i < n)
	{
		/* check if i is not on the last arg before printing */
		if (i != (n - 1))
			printf("%d%s", va_arg(list, int), out);
		else
			printf("%d", va_arg(list, int));

		i++;
	}
	va_end(list);

	printf("\n");
}
