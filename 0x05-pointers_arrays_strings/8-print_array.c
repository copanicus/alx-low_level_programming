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
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
