#include "main.h"

/**
  * _isupper - checks if the char is upper or lower case
  * @c: the incoming char
  * Return: the return value of the game
  */
int _isupper(int c)
{
	int k;

	k = c;
	if (k > 63 && k < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
