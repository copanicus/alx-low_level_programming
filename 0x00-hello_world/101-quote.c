#include <unistd.h>



/**
* main - point of entry
* Description: Dora Korpar piece of art
* useful piece of art
* Return: 0
*/


int main(void)
{
char str2[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str2, 61);
return (1);
}
