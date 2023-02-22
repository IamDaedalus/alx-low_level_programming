#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet 10x with a new line
  * this basically loops from a - z ten times
  */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	i = 0;

	while (i < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
