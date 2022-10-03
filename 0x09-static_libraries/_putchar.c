#include <unistd.h>

/**
* _putchar - write the character c to standard output
*
* @c: The character to print
* Return: 0 always
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
