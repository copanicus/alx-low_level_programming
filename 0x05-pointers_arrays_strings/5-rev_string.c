#include "main.h"

/**
* rev_string - reverse the string
* @s: to reverse
*/

void rev_string(char *s)
{
int a, b, c;
char d;

a = 0;
c = 0;

while (s[a] != '\0')
{
	a++;
}
c = a - 1;
for (b = 0; b < len / 2; b++)
{
	d = s[b];
	s[b] = s[c];
	s[c--] = d;
}
}
