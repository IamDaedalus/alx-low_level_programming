#include "main.h"
#include <stdio.h>

/**
  * main - the entry point of every C program
  * @argc: the number of commandline arguements used
  * @argv: the string array of commandline arguements
  * Return: returns 0 for a successful operation
  */
int main(int argc, char *argv[])
{
	/* interesting cast here */
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
