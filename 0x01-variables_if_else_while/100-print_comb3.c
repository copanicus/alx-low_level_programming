#include <stdio.h>


/**
* main - print numbers from 00 to 89
*
* Return: Always 0
*/


int main(void)
{
	int a, i;

	for (a = '0'; a <= '9'; a++)
	{
		if (a < i)
		{
			putchar (a);
			putchar (i);
			if (a != '8' || (a == '8' && i != '9'))
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return(0);
}

