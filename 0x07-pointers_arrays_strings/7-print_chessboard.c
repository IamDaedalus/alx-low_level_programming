#include "main.h"

/**
  * print_chessboard - prints the chess based on a 2d array
  * @a: the 2d board
  */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* using 8 here because the array size is 8*/
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
