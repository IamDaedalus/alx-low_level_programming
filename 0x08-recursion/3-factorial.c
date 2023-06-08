#include "main.h"

/**
 * factorial - print the factorial of n
 * @n: the factorial of n
 * Return: return the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
