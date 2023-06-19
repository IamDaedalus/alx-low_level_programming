#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned long first = 0, second = 0;

	if (argc == 3)
	{
		first = build_digit(argv[1]);
		second = build_digit(argv[2]);

		/*
		printf("%lu\n", first);
		printf("%lu\n", second);
		*/
		printf("%lu\n", mul(first, second));
	}
	else
	{
		print("Error");
		exit(98);
	}

	return (0);
}

unsigned long mul(unsigned long a, unsigned long b)
{
	return a * b;
}

void print(char *msg)
{
	while (*msg != '\0')
	{
		_putchar(*msg);
		msg++;
	}

	_putchar('\n');
}

unsigned long build_digit(char *in)
{
	long result = 0;
	while (*in != '\0')
	{
		/* neat trick
		 * stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
		 */
		if (is_digit(*in) == 1)
		{
			result = result * 10 + (*in - '0');
			in++;
		}
		else
		{
			print("Error\n");
			exit(98);
		}
	}

	return (result);
}

int is_digit(char n)
{
	return (n >= '0' && n <= '9');
}

