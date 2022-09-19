#include "main.h"

/**
* swap_int - swapping two numbers
* @a: 1st integer
* @b: 2nd integer
* Return: void
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
