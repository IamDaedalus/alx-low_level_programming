#include "main.h"

/**
  * _isalpha - check if a char is a letter
  * @c: incoming char
  * Return: 0 or 1
  */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
