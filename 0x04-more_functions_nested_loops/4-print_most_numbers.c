#include "main.h"

/**
* print_most_numbers - to print most numbers
* Description: excluding 2 and 4
*
* Return: void
*/

void print_most_numbers(void)
{
	char a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
	}
	_putchar('\n');
}