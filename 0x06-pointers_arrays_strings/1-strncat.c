#include "main.h"

/**
* _strncat - concatenating two strings having n-bytes
* @dest: destination
* @src: source
* @n: amount of bytes within the src
* Return: pointer to dest
*/

char _strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (b < n)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		b++;
		a++;
	}
	return (dest);
}
