#include "main.h"

/**
* reverse_array - content of array in reverse (i.e integers)
* @a: array
* @n: number of element in the array
* Return: nothing
*/

void reverse_array(int *a, int n)
{
	int b, c, d;

	for (b = 0; b < n - 1; b++)
	{
		for (c = b + 1; c > 0; c--)
		{
			d = *(a + c);
			*(a + c) = *(a + (c - 1));
			*(a + (c - 1)) = d;
		}
	}
}
