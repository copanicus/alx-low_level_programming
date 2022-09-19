#include "main.h"
/**
* _puts - to output strings
* @str: 1st argument
* Return: as value
*/

void _puts(char *str)
{
	int b;

	while (str[b])
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
