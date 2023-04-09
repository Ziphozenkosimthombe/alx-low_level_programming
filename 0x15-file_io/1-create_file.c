#include "main.h"

/**
 * create_file - function that create the file
 * @filename: file name
 * @text_content: the text to write into the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		dprintf(fd, "%s", text_content);

	close(fd);
	return (1);
}
