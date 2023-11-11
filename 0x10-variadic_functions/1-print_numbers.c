#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: seperator
 * @n: num of  args
 * Return: No
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; (i < n - 1); i++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(args, int), separator);
			}
			else
			{
				printf("%d", va_arg(args, int));
			}
		}
		printf("%d", va_arg(args, int));
		va_end(args);
	}
	printf("\n");
}
