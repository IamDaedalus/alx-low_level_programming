#include "main.h"

/**
  * _abs - return the absolute value of a number
  * @n: the value to be operated on
  * Return: returns the valuen i.e the abs value
  */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
