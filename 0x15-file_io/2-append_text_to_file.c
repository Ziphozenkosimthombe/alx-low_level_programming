#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name to append text
 * @text_content: text to append with NULL termination
 * Return: 1 on success and -1 on failure
 * if filename is NULL return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "a");
	if (fp == NULL)
		return (-1);

	if (text_content != NULL)
		fprintf(fp, "%s", text_content);
	fclose(fp);
	return (1);
}
