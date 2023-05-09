#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

void print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

void print_error(const char *msg, const char *file)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", msg, file);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to, n_read, n_written;
	char buf[BUF_SIZE];
	struct stat st;

	if (argc != 3)
	{
		print_usage();
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Can't read from file", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		print_error("Can't write to", argv[2]);
		exit(99);
	}

	while ((n_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		n_written = write(fd_to, buf, n_read);
		if (n_written != n_read)
		{
			print_error("Can't write to", argv[2]);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		print_error("Can't read from file", argv[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		print_error("Can't close fd", strerror(errno));
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		print_error("Can't close fd", strerror(errno));
		exit(100);
	}

	if (stat(argv[2], &st) == 0)
	{
		if ((st.st_mode & S_IFMT) == S_IFREG)
		{
			chmod(argv[2], 0644);
		}
	}

	return (0);
}

