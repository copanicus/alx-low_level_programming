#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list li;
	unsigned int a = 0, b, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(li, format);
	while (format && format[a])
	{
		b = 0;
		while (t_arg[b])
		{
			if (format[a] == t_arg[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(li, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(li, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(li, double)), c = 1;
			break;
		case 's':
			str = va_arg(li, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} a++;
	}
	printf("\n"), va_end(li);
}
