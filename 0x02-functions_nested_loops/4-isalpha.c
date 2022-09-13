#include "main.h"

/**
* 4_isapha - to confirm alphabetic letter
*
* Decription: _isalpha or not
* @c: to display letters in small or big
* Return: depending on the conditions return 0 or 1
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
