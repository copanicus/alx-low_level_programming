#include "main.h"

/**
* _strncpy - copy string
* @dest: destination
* @src: source
* @n: amount of byte in the src
* Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for ( ; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
