#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: endline
 * @n: num of  args
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *val;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(args, char*);
		if (val != NULL)
			printf("%s", val);
		else
			printf("%p", val);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
