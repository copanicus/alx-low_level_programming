#include "main.h"
#include <stdio.h>

/**
* main - to print the number 1 to 100
*
* Decription: for multiple of 3 fizz while that of 5 buzz
* Return: 0 always
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
		i++;
	}
	printf('\n');
}
