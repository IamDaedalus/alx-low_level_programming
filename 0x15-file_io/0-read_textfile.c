#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads the contents of a textfile up to position letters
 * @filename: the file name of the text to read
 * @letters: the number of characters to read
 * Return: returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	int cur_char = 0;
	size_t count = 0;

	file = fopen(filename, "r");
	if (!file)
	{
		return (0);
	}

	while ((cur_char = fgetc(file)) != EOF)
	{
		putchar(cur_char);
		count++;

		if (count == letters)
			break;
	}

	fclose(file);
	return ((ssize_t)count);
}
