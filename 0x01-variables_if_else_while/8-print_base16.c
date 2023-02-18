#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int s;

	for (s = 48; s <= 57; s++)
	{
		putchar(s);
	}

	for (s = 97; s <= 102; s++)
	{
		putchar(s);
	}

	putchar('\n');

	return (0);
}
