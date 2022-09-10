#include <stdio.h>


/**
* main - missing alphabets
*
* Description: print alphabts
* this program is to print "alphabets with some missing letters
* Return: 0 always
*/



int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar (c);
		}
	}
	putchar ('\n');
	return (0);
}
