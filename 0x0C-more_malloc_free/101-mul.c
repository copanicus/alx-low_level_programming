#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
	int a, b = 1, c = 1;

	for (a = 0; argv[1][a]; a++)
		if (argv[1][a] != '0')
		{
			b = 0;
			break;
		}

	for (a = 0; argv[2][a]; a++)
		if (argv[2][a] != '0')
		{
			c = 0;
			break;
		}

	if (b == 1 || c == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set memery to zero in a new array
 * @d: char array.
 * @e: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_initialize_array(char *d, int e)
{
	int f = 0;

	for (f = 0; f < e; f++)
		d[f] = '0';
	d[e] = '\0';
	return (d);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @g: row of the array.
 *
 * Return: length of the number.
 */
int _checknum(char *argv[], int g)
{
	int h;

	for (h = 0; argv[g][h]; h++)
		if (!isdigit(argv[g][h]))
		{
			printf("Error\n");
			exit(98);
		}

	return (h);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int num1, num2, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	num1 = _checknum(argv, 1), num2 = _checknum(argv, 2);
	_is_zero(argv), lnout = num1 + num2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _initialize_array(nout, lnout);
	k = lnout - 1, i = num1 - 1, j = num2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = num1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = _initialize_array(nout, lnout);
			k = lnout - 1, i = num1 - 1, j = num2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
