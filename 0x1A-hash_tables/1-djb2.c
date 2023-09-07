#include "hash_tables.h"


/**
 * hash_djb2 - the implementaction of the djb2 algorithm
 * @str: hash string.
 *
 * Return: the hash calcu.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashing;
	int calcu;

	hashing = 5381;
	while ((calcu = *str++) != 0)
		hashing = ((hashing << 5) + hashing) + calcu; /*hash * 33 + calcu*/
	return (hashing);
}
