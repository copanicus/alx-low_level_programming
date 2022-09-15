#include "main.h"
#include <stdio.h>

/**
* main - to print the number 1 to 100
*
* Decription: for multiple of 3 fizz and for 5 buzz
* Return: 0 always
*/

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i / 3 == 1 && i / 5 != 1)
		{
			printf("Fizz");
		}
		else if (i / 5 == 1 && i / 3 != 1)
		{
			printf("Buzz");
		}
		else if (i / 3 == 1 && i / 5 == 1)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			print(" %d", i);
		}
	}
	printf('\n');
	return (0);
}
