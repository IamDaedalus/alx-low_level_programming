#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - prints anything
  * @format: list of argument types passed to function
  */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i;
	double d;

	va_start(args, format);
	while (format && *format)
	{
		switch (*format++)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int);
				break;
			case 'f':
				printf("%f", va_arg(args, int));
				break;
			case 's':
				if (s == NULL)
					printf("(nil)");
				printf("%s", va_arg(args, int));
				break;
			default:
				continue;
		}
		if (*format)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}

