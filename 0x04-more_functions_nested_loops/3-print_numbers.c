#include "main.h"

/**
* print_numbers - function for number printing within
* 0 to 9
*
* Return: return void (nothing)
*/

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
