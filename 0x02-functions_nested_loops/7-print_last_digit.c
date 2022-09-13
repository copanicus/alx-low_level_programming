#include "main.h"

/**
* print_last_digit - last digit to be printed
* @n: to extract the last digit
* Return: last value digit
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
