#include "main.h"

/**
* print_rev - reverted string
* @s: char pointer
* Return: void
*/

void print_rev(char *s)
{
	int a, b, c;

	a = 0;

	while (s[a] != '\n')
	{
		a++;
	}
	for (b = c - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
