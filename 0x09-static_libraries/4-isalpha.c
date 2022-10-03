#include "main.h"

/**
* _isalpha - to confirm alphabetic letter
* Decription: is it an alphabet
* @c: to display letters in small or big
* Return: depending on the conditions return 0 or 1
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
