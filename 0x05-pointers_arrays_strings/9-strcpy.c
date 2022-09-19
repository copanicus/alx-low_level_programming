#include "main.h"

/**
* _strcpy - copy and paste strings
* @dest: value destination
* @src: value source
*
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j]; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = src[j];
	return (dest);
}
