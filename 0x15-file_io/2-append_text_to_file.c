#include "main.h"

/**
 * _strlen - Finds length of string
 * @str: Pointer tostring
 * Return: Length of string
 */

size_t _strlen(char *str)
{
	size_t j;

	for (j = 0; str[j]; j++)
		;
	return (j);
}

/**
 * append_text_to_file - Appendstext at the end of file.
 * @filename: Name of the file
 * @text_content: Terminated string to add at the end of the file (NULL)
 * Return: 1 On success else -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
		len = write(file, text_content, _strlen(text_content));
	close(file);
	if (len == -1)
		return (-1);
	return (1);
}
