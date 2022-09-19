#include "main.h"

/**
* puts2 - prints one a char from the 2 string
* @str: string want to print
* Description: and newline
* Return: void
*/

void put2(char *str)
{
	int a = 0;
	int n;
	while (str[a] != '\0')
	{
		a++;
	}
	for (n = 0; a > n; n += 2)
	{
		_putchar(str[a])
	}
}
