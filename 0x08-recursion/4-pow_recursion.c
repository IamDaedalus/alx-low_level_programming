#include "main.h"

/**
 * _pow_recursion - recursively calculates the power of number
 * @x: the number to calculate
 * @y: the power to calulate to
 * Return: returns x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0) /* to satisfy the x^0=1 rule */
		return (1);
	else if (y == 1) /* to satisfy x^1=x rule */
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
