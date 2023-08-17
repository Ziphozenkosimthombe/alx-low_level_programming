#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - it's finds biggest number
 *
 * @usrn: name of a user
 * @len: the user's length
 * Return: number that is the biggest
 */
int f4(char *usrn, int len)
{
	int chr;
	int chrV;
	unsigned int num_rand;

	chr = *usrn;
	chrV = 0;

	while (chrV < len)
	{
		if (chr < usrn[chrV])
			chr = usrn[chrV];
		chrV += 1;
	}

	srand(chr ^ 14);
	num_rand = rand();

	return (num_rand & 63);
}

/**
 * f5 - each character of username it multiplies
 *
 * @usrn: name of the user
 * @len: the user's length
 * Return: The multiplied character
 */
int f5(char *usrn, int len)
{
	int chr;
	int chrV;

	chr = chrV = 0;
	while (chrV < len)
	{
		chr = chr + usrn[chrV] * usrn[chrV];
		chrV += 1;
	}

	return (((unsigned int)chr ^ 239) & 63);
}

/**
 * f6 - random character will be generated
 *
 * @usrn: name of the user
 * Return: character that is random
 */
int f6(char *usrn)
{
	int chr;
	int chrV;

	chr = chrV = 0;

	while (chrV < *usrn)
	{
		chr = rand();
		chrV += 1;
	}

	return (((unsigned int)chr ^ 299) & 63);
}

/**
 * main - The entry point
 *
 * @argc: The count of arguments
 * @argv: The vector of arguments
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	char kygen[7];
	int ln, chr, chrV;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432, 0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34, 0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (ln = 0; argv[1][ln]; ln++)
		;

	kygen[0] = ((char *)alph)[(ln ^ 59) & 63];

	chr = chrV = 0;
	while (chrV < ln)
	{
		chr = chr + argv[1][chrV] * chr;
		chrV = chrV + 1;
	}
	kygen[2] = ((char *)alph)[(chr ^ 85) & 63];

	kygen[3] = ((char *)alph)[f4(argv[1], ln)];

	kygen[4] = ((char *)alph)[f5(argv[1], ln)];

	kygen[5] = ((char *)alph)[f6(argv[1])];
	kygen[6] = '\0';
	for (chr = 0; kygen[chr]; chr++)
		printf("%c", kygen[chr]);
	return (0);
}
