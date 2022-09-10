#include <stdio.h>



/**
 *  main - print numbers
 *
 *  Description: using the miain function
 *  this program is to print "numbers in base 10
 *  Return:0 always
 */



int main(void)

{
	int d;

	for (d = 0; d < 10; ++d)
		putchar(d + '0');
	putchar('\n');
	return (0);
}

