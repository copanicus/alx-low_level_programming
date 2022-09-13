#include "main.h"

/**
* print_sign - base conditions print signs
* @n: argument will be passed
* Return: 1, 0 and -1
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
