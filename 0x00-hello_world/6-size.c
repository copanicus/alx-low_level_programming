#include <stdio.h>



/**
* main - print the string in the print function
* Description: using the main function
* C program that print the size of various type data
* Return: 0
*/



int main(void)
{
print("Size of a char: %d byte(s)\n", sizeof(char));
print("Size of an int: %d byte(s)\n", sizeof(int));
print("Size of a long int: %d byte(s)\n", sizeof(long int));
print("Size of a long long int: %d byte(s)\n", sizeof(long long int));
print("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
