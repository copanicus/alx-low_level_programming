#include <stdio.h>
#include "main.h"

/**
* print_array - print element of n array
* @a: array
* @n: number of element
* Return: void
*/

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == 0)
			printf("%d", a[b]);
		else
			printf(", %d", a[b]);
	}
	printf('\n');
}