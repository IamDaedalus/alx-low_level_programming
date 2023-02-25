#include "main.h"

/**
  * _isdigit - checks if the input is a digit
  * @c: the incoming value
  * Return: returns 1 for a digit and 0 for non digit
  */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
