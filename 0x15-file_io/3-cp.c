#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * copy_file - copies the contents of one file to another
 * @file_from: the file to copy from
 * @file_to: the file to copy to
 * Return: non zero value for failure or 0 for success
 */
int copy_file(const char *file_from, const char *file_to)
{
	int file_from_fd, file_to_fd, close_from = 0, close_to = 0;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	file_from_fd = open(file_from, O_RDONLY);
	if (file_from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		return (98);
	}

	file_to_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s", file_to);
		close(file_from_fd);
		return (99);
	}
	while ((bytes_read = read(file_from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s", file_to);
			close(file_from_fd);
			close(file_to_fd);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		close(file_from_fd);
		close(file_to_fd);
		return (98);
	}

	close_from = close(file_from_fd);
	close_to = close(file_to_fd);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from_fd);
		return (100);
	}
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to_fd);
		return (100);
	}

	return (0);
}

/**
 * main - main entry point for C programs
 * @argc: the number of commandline args
 * @argv: the commandline args
 * Return: 0 for success any other for failure
 */
int main(int argc, char *argv[])
{
	int exit_code = 0;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	exit_code = copy_file(argv[1], argv[2]);
	return (exit_code);
}
