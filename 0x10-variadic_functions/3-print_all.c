#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - prints anything
  * @format: list of argument types passed to function
  */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;
	int flag;

	va_start(args, format);
	while (format && format[i])
	{
		flag = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				flag = 0;
				break;
		}
		if (flag && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

