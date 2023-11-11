#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums  all passed parameters
 * @n: n of args
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	int sum;
	va_list args;

	if (n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
			sum += va_arg(args, int);

		va_end(args);
	}
	return (sum);
}
