#include "main.h"

/**
* leet - encoding string into 1337
* @s: input string
* Return: s
*/
char *leet(char *s)
{
	int a = 0, b;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + a) != '\0')
	{
		for (b = 0; b < 5; b++)
		{
			if (*(s + a) == lower_case[b] || *(s + a) == upper_case[b])
			{
				*(s + a) = numbers[b];
				break;
			}
		}
		a++;
	}
	return (s);
}
