#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: pointer to name of the file to read
 * @letters: actual number of letters it could read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t byte_numbers_to_be_read, byte_numbers_to_be_printed;
	char *buf;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	byte_numbers_to_be_read = read(file_descriptor, buf, letters);
	if (byte_numbers_to_be_read == -1)
	{
		close(file_descriptor);
		free(buf);
		return (0);
	}
	buf[byte_numbers_to_be_read] = '\0';
	byte_numbers_to_be_printed =
	write(STDOUT_FILENO, buf, byte_numbers_to_be_read);
	if (byte_numbers_to_be_printed == -1 || byte_numbers_to_be_printed !=
	byte_numbers_to_be_read)
	{
		close(file_descriptor);
		free(buf);
		return (0);
	}

	close(file_descriptor);
	free(buf);

	return (byte_numbers_to_be_printed);
}

