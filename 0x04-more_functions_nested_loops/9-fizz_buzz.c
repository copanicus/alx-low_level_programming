#include "main.h"
#include <stdio.h>

/**
* main - fizz for multiple of 3, buzz for 5 while fizzbuzz for both
*
* Return: 0 always
*/

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 15 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
		printf("%d ", a);
		a++;
	}
	printf("\n");
	return (0);
}
