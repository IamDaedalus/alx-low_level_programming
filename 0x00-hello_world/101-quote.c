#include <string.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1
*/
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, str, strlen(str) - 1);
	return (1);
}

