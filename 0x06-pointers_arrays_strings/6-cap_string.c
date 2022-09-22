#include "main.h"

/**
* cap_string - all word of a string capitalize
* @s: input string
* Return: s
*/

char *cap_string(char *s)
{
	int a = 0, k;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + a) >= 97 && *(s + a) <= 122)
		*(s + a) = *(s + a) - 32;
	a++;
	while (*(s + a) != '\0')
	{
		for (k = 0; k < 13; k++)
		{
			if (*(s + a) == sep_words[k])
			{
				if  ((*(s + (a + 1)) >= 97) && (*(s + (a + 1)) <= 122))
					*(s + (a + 1)) = *(s + (a + 1)) - 32;
				break;
			}
		}
		a++;
	}
	return (s);
}
