#include "main.h"

/**
* main - print lowercase letters
*
* Description: to print lowercase alphabets 10 times
*/

void print_alphabet_x10(void)
{
	int a;
	int b;

	for (b = 0; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

