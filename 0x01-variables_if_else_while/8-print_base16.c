#include <stdio.h>



/**
* main - print in base 16
*
* Return: 0 always
*/



int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
