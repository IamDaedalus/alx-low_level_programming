#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * append_text_to_file - appends some text to the end of the file
 * @filename: the name of the file to append the text to
 * @text_content: the text to append to filename
 * Return: 1 for success and -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (!filename)
		return (-1);

	/** try opening the file **/
	if (access(filename, F_OK) == 0)
	{
		file = fopen(filename, "a+");
		if (!file)
			return (-1);
	}
	else
		return (-1);

	if (text_content)
		fputs(text_content, file);

	fclose(file);

	return (1);

}
