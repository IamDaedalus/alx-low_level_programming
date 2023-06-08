#include "main.h"

/**
 * check_primality - this checks
 * @unknown: the input number to check
 * @starting_prime: the starting prime, usually 2
 * Return: returns the number if its a prime otherwise 0
 */
int check_primality(int unknown, int starting_prime)
{
	/*
	 * confirm the numbers are not the same and is not an even number
	 */
	if (unknown != starting_prime && unknown % starting_prime == 0)
		return (0);
	if (unknown == starting_prime)
		return (1);

	return (check_primality(unknown, 1 + starting_prime));
}

/**
 * is_prime_number - returns 1 if n is a prime and 0 otherwise
 * @n: the number to check
 * Return: returns the number
 */
int is_prime_number(int n)
{
	/*
	 * 2 is the smallest known prime number so we start with that
	 */
	int starting_prime = 2;

	/*
	 * i could substitute 2 in the lines below with starting_prime
	 * but I need to maintain it in case the check_primality is changing
	 * the value with recursion
	 */
	if (n <= 2)
		/* return 1 if n is 2 */
		return (n == 2 ? 1 : 0);
	if (n % 2 == 0)
		/* return 0 on even numbers */
		return (0);

	return (check_primality(n, starting_prime));
}
