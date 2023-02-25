#include "main.h"

/**
  * _isupper - checcs if the char is upper or lower case
  * @c: the incoming char
  * Return: the return value of the game
  */
int _isupper(int c)
{
	if (c > 63 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
