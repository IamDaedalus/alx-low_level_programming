#include "main.h"

/**
 * calc_sqr - progressively checks the check against the possible_sqr
 * @possible_sqr: the possible_sqr to check
 * @check: the check we progressively use
 * Return: returns the check or -1 if the square is not the same
 */
int calc_sqr(int possible_sqr, int check)
{
	/*
	 * function works by progressively multiple check by itself
	 * then checking if it more than or equal to the possible_sqr
	 * if it == possible_sqr return that iteration
	 * otherwise we've overshot the possible sqr and we return -1
	 */
	if (check * check == possible_sqr)
		return (check);
	else if (check * check > possible_sqr)
		return (-1);

	return (calc_sqr(possible_sqr, check + 1));
}

/**
 * _sqrt_recursion - return -1 for non natural squares
 * @n: the number to use
 * Return: returns -1 or natural square of number
 */
int _sqrt_recursion(int n)
{
	/*
	 * there's probably a better way to do this but
	 * i want us to start from 0 then work our way up
	 * might need optimising though
	 */
	return (calc_sqr(n, 0));
}
