#include <stdio.h>



/**
* main - entry point
*
* Description: print alphabet
* this program to print "alphabet in lowercase
* Return: 0 always
*/



int main(void)

{
	char b;

	for (b = 'a', b = 'z', b++)
		putchar(b);
	
	putchar('\n');
	return (0);
}
