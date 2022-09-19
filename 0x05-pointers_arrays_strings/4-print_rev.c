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
	b = 0;

	for (c = 0; s[c] != '\0'; ++c)
	{
		b = c;
	}
	for (b = 0; b >= a; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
