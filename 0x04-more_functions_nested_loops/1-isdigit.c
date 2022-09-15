#include "main.h"

/**
* _isdigit - for digit or character
* @c: test for digit
* Return: 1 or 0
*/

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
