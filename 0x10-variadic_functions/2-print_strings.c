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
	char *cur_str;
	const char *out;

	if (n <= 0)
		return;

	va_start(list, n);
	out = seperator;
	while (i < n)
	{
		cur_str = va_arg(list, char *);

		if (cur_str != NULL)
			printf("%s", cur_str);
		else
			printf("(nil)");

		if (i < n - 1 && out != NULL)
			printf("%s", out);

		i++;
	}

	va_end(list);

	printf("\n");
}
