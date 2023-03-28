#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - prints a set of strings passed to the function
  * @separator: the seperator for the strings
  * @n: number of passed arguments to iterate over
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	const char *sep;
	char *cur_str;
	unsigned int i;

	sep = separator;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		cur_str = va_arg(args, char *);

		if (cur_str != NULL)
			printf("%s", cur_str);
		else
			printf("(nil)");

		if (i < n - 1 && sep != NULL)
			printf("%s", sep);
	}

	va_end(args);

	printf("\n");
}
