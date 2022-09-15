#include "main.h"

/**
* more_numbers - print number from 0 to 14
*
* Return: void
*/

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; j <= 14; b++)
		{
			if (a >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
