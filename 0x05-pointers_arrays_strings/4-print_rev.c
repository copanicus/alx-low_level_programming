#include "main.h"

/**
* print_rev - reverted string
* @s: char pointer
* Return: void
*/

void print_rev(char *s)
{
	int b;

	for (b = b - 1; s[b]; b--)
	{
		_putchar(s[b]);
	}
	while (s[b])
	{
		b++;
	}
	_putchar('\n');
}
