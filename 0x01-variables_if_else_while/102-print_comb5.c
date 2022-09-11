#include <stdio.h>


/**
* main - printing digits in two's
*
* Return: 0 always
*/


int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if (a < b && a != b)
			{
				putchar ((a / 10) + '0');
				putchar ((a % 10) + '0');
				putchar (' ');
				putchar ((b / 10) + '0');
				putchar ((b % 10) + '0');
				if (a != '6')
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
