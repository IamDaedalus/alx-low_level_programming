#include "main.h"

/**
  * factorial - prints the factorial of a number
  * @n: the number
  * Return: returns the result of the factorial
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	/* n is reduced every call to the function which makes it work */
	return (n * factorial(n - 1));
}
