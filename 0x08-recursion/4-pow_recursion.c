#include "main.h"

/**
  * _pow_recursion - returns the power of a number to the another
  * @x: the number to be raised
  * @y: the exponent
  * Return: return the final value of the computation
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* return this based on the question */
	else if (y == 0)
		return (1); /* return 1 because x^0 is always 1 */
	else if (y == 1)
		return (x); /* return x because x^1 is always x */

	/* just like the factorial but this time we decrease y every call */
	return (x * _pow_recursion(x, y - 1));
}
