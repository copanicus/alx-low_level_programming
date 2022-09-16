#include "main.h"
#include <stdio.h>

/**
* main - print number from 1 to 100, followed by a newline
*
* Description: for multiple of 3 fizz while for 5 buzz
* but for multiple of both FizzBuzz
* Return: 0 always
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
		i++;
	}
	printf('\n');
}
