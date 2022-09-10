#include <stdio.h>



/**
* main- alphabets in lowercase and uppercase
*
* Description: alphabets printing
* this program is to print "alphabets both in lowercase and in uppercase
* Return: 0 always
*/



int main(void)

{
char k;
for (k = 'a'; k<='z'; ++k)
putchar(k);
for (k = 'A'; k <= 'Z'; ++k);
putchar(k);
putchar('\n');
return (0);
}
