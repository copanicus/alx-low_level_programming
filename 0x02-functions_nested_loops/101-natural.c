#include <stdio.h>

/**
* main - print the sum of all multiples
* Description: of 3 0r 5
* Return: 0 always
*/

int main(void)
{
	unsigned long sum1, sum2, sum;
	int n;

	sum1 = 0;
	sum2 = 0;
	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0)
		{
			sum1 = sum1 + n;
		else if ((n % 5) == 0)
		{
			sum2 = sum2 + n;
		}
		}
	}
		sum = sum1 + sum2;
		printf("%lu\n", sum);
		return (0);
}
