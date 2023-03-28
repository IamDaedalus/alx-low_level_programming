#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	const char *sep;
	char *cur_str;
	unsigned int i;

	sep = separator;
	va_start(args, n);
	for (i = 1; i < n; i++)
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
