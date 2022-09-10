#include <stdio.h>



/**
* main - print in reverse order
*
* Description: in the main function
* this program is to print "alphabets in the reverse order
* Return: 0 always
*/



int main(void)

{
	char c; 	
	for(c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}
