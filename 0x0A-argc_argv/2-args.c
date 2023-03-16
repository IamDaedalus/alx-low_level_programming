#include <stdio.h>

/**
  * main - the entry point of every C program
  * @argc: the number of commandline arguments passed
  * @argv: string array of commandline arguments passed
  * Return: 0 for success
  */
int main(int argc, char *argv[])
{
	int c;

	if (argc == 1)
		printf("%s\n", argv[0]);
	else if (argc > 1)
	{
		for (c = 0; c < argc; c++)
		{
			printf("%s\n", argv[c]);
		}
	}

	return (0);
}
