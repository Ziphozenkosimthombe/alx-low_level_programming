#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: funtion copies
 * @src: bytes from memory area
 * @dest:to memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{


	char* dest_ptr = dest;
	const char* src_ptr = src;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
