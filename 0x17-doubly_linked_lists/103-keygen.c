#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - The key will be generatedepending on a username
 * for crackme5
 *
 * @argc: argument number that will be passed
 * @argv: The arguments will be passed to main
 *
 * Return: 0 if pass and 1 if fail
 */
int main(int argc, char *argv[])
{
	unsigned int a, b;
	size_t len, add;
	char *lh = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char q[7] = "       ";

	if (argc != 2)
	{
		printf("Coreect usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	q[0] = lh[(len ^ 59) & 63];
	for (a = 0, add = 0; a < len; a++)
		add = add + argv[1][a];
	q[1] = lh[(add ^ 79) & 63];
	for (a = 0, b = 1; a < len; a++)
		b = b * argv[1][a];
	q[2] = lh[(b ^ 85) & 63];
	for (b = argv[1][0], a = 0; a < len; a++)
		if ((char)b <= argv[1][a])
			b = argv[1][a];
	srand(b ^ 14);
	q[3] = lh[rand() & 63];
	for (b = 0, a = 0; a < len; a++)
		b = b + argv[1][a] * argv[1][a];
	q[4] = lh[(b ^ 239) & 63];
	for (b = 0, a = 0; (char)a < argv[1][0]; a++)
		b = rand();
	q[5] = lh[(b ^ 229) & 63];
	printf("%s\n", q);
	return (0);
}
