#include <stdio.h>


/**
* main - print numbers from 00 to 89
*
* Return: Always 0
*/


int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		if (a < b)
		{
			putchar (a);
			putchar (b);
			if (a != '8' || (a == '8' && b != '9'))
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return(0);
}

