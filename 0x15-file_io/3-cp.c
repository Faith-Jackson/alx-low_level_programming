#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check97 - Checks for Correct Number of Arguments
 * @argc: Argument Count
 * Return: Void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - Checks That file_from Exist and Can be Read
 * @check: Checks if True or False
 * @file: file_from Name
 * @fd_from: File Descriptor of file_from
 * @fd_to: file descriptor of file_to, or -1
 * Return: void
 */
void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check99 - Checks if file_to Was Created and/or Can be Written to
 * @check: Checks if True of False
 * @file: file_to Name
 * @fd_from: File Descriptor of file_from
 * @fd_to: file descriptor of file_to, or -1
 * Return: void
 */
void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check100 - Checks That File Descriptors Closed Properly
 * @check: Checks if True or False
 * @fd: File Descriptor
 * Return: void
 */

void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies Content of File to Another File.
 * @argc: Argument Count
 * @argv: Array of *pnt Argument
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fd_to, argv[2], fd_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		check98(lenr, argv[1], fd_from, fd_to);
		lenw = write(fd_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check99(lenw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}
