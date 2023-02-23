#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints from n to 98
  * @n: the input to be printed from
  */
void print_to_98(int n)
{
	int k;

	k = n;
	if (k > 98)
	{
		while (k > 97)
		{
			if (k != 98)
			{
				printf("%d, ", k);
			}
			else
			{
				printf("%d\n", k);
			}
			k--;
		}
	}
	else
	{
		for (k = n; k <= 98; k++)
		{
			if (k != 98)
			{
				printf("%d, ", k);
			}
			else
			{
				printf("%d\n", k);
			}
		}
	}
}
