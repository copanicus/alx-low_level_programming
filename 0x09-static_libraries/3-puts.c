#include "main.h"
/**
* _puts - to output strings
* @str: 1st argument
* Return: as value
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
