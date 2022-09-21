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

	while (dest[a] != '\0')
	{
		++a;
	}
	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		++b;
		++a;
	}
	dest[a] = '\0';
	return (dest);
}
