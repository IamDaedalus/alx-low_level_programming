#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - prints numbers with a seperator
  * @seperator: the seperator to use
  * @n: the number of arguments
  */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	const char *s;
	unsigned int i;

	s = seperator;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && s != NULL)
		{
			printf("%s", s);
		}
	}

	va_end(args);
	printf("\n");
}
