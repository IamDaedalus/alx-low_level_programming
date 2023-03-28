#include <stdarg.h>

/**
  * sum_them_all - sums all arguments added to this function
  * @n: the start/number of arguments
  * Return: returns the sum of all arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	/* for compatibility reasons this is included */
	va_end(args);
	return (sum);
}
