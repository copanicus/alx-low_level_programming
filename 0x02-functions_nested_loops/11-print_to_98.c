#include "main.h"

/**
* print_to_98 - printing numbers from 1 to 98
*
* Return: 0 always
* @n: argument parameter
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (n < 98; n++)
		{
			printf("%d ", n);
		}
	}
	printf("%d\n", n);
}
