#include "main.h"
#include <stdio.h>

/**
  * main - the entry point of every C program
  * @argc: the number of commandline arguments passed
  * @argv: string array of commandline arguments passed
  * Return: 0 for success
  */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc == 1)
		printf("%d\n", 0);
	else if (argc > 1)	/* we do -1 because we don't want the original command */
		printf("%d\n", argc - 1);

	return (0);
}
