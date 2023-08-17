#include <stdio.h>

int main()
{
	int k, o, big_num = 0;
	for (k = 100; k < 1000; k++)
	{
		for (o = 100; o < 1000; o++)
		{
			int product = k * o;
			int tem = product, rv = 0;
			while (tem != 0)
			{
				rv = rv * 10 + tem % 10;
				tem = tem / 10;
			}
			if (product == rv && product > big_num)
			{
				big_num = product;
			}
		}
	}
	FILE *fptr;
	fptr = fopen("102-result", "w");
	fprintf(fptr, "%d", big_num);
	fclose(fptr);
	return 0;
}
