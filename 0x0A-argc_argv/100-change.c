#include <stdlib.h>
#include <stdio.h>

/**
  * main - entry point for this program
  * @argc: the number of arguments
  * @argv: the list of arguments
  * Return: returns 0 for success
  */
int main(int argc, char *argv[])
{
	int cents, coins_total = 0;

	if (argc != 2) /* 2 instead of one because we're accounting for the program */
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);

		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			coins_total += 1;
		}
	}
	printf("%d\n", coins_total);
	return (0);
}
