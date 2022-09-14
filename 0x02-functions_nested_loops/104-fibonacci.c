#include <stdio.h>

/**
* main - 98 number of Fibonacci
*
* Description: from 1 and 2 with a newline
* Return: 0 always
*/

int main(void)
{
	unsigned long int a, b, c, d, e, f, j;

	b = 1;
	c = 2;
	printf("%lu", b);
	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}
	d = b / 1000000000;
	e = b % 1000000000;
	f = c / 1000000000;
	j = c % 1000000000;
	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", f + (j / 1000000000));
		printf("%lu", j % 1000000000);
		f = f + d;
		d = f - d;
		j = j + e;
		e = j - e;
	}
	printf("\n");
	return (0);
}
