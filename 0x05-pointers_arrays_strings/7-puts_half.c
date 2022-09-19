#include "main.h"

/**
* puts_half - prints half string
* @str: given string
* Return: void
*/

void puts_half(char *str)
{
	int a, b, c;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2)
	{
		for (c = (a - 1) / 2; c < a - 1; c++)
		{
			_putchar(str[c + 1]);
		}
	}
	else if (a % 2 == 0)
	{
		for (b = a / 2; str[b] != '\0'; b++)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
