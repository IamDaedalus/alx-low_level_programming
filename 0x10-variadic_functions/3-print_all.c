#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a simple printf clone
 * @format: the input string
 */
void print_all(const char *const format, ...)
{
	va_list list;
	int scan;
	int i = 0;
	char *s;

	va_start(list, format);
	while (format && format[i])
	{
		scan = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (!s)
					printf("(nil)");

				printf("%s", s);
				break;
			default:
				scan = 0;
				break;
		}
		if (scan && format[i + 1])
			printf(", ");

		i++;
	}
	printf("\n");

	va_end(list);
}
