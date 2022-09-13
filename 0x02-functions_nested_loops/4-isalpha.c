#include "main.h"

/**
* _isapha - to confirm alphabetic letters
* 
* @c: to check the characters of the letter
* Return: depending on the conditions return 0 or 1
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
