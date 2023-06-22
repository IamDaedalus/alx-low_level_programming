#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a variable list of strings from the function
 * @seperator: the seperator for the strings
 * @n: the number of variadic variables
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	const char *out = seperator ? seperator : "";
	char *str;

	if (n <= 0)
		return;

	va_start(list, n);

	while (i < n)
	{
		str = va_arg(list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < (n - 1))
			printf("%s", seperator);

		i++;
	}

	va_end(list);

	printf("\n");
}
