#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b, c, d, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (b = 0; s1[b] != '\0'; b++)
		;

	for (c = 0; s2[c] != '\0'; c++)
		;

	if (n > c)
		n = c;

	d = b + n;

	a = malloc(d + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < d; i++)
		if (i < b)
			a[i] = s1[i];
		else
			a[i] = s2[i - b];

	a[i] = '\0';

	return (a);
}
