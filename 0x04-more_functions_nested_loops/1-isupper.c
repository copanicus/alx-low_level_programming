#include "main.h"

/**
* _isupper - uppercase alphabets
*
* Description: printing of uppercase letters
* @c: checking characters
* Return: 1 or 0
*/

int _isupper(int c)
{
	if (c >= 'a' && c >= 'z')
		return (0);
	else
		return (1);
}
