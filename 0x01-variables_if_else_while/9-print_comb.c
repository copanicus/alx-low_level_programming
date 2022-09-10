#include <stdio.h>


/**
* main - print combination possible
*
* Description: in main function
* this program is to print "possible combination of single digit
* Return: 0 always
*/


int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
