#include "main.h"

/**
  * swap_int - swaps two numbers
  * @a: first value to swap
  * @b: second value to swap
  */
void swap_int(int *a, int *b)
{
	/* the temp value is just a regular int and not a pointer */
	int temp = *a;
	*a = *b;
	*b = temp;
}
