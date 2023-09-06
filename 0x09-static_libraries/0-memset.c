#include "main.h"

/**
 * _memset - memset func
 * @s: pointer var s
 * @b: value(s) to be chabed
 * @n: the index
 *
 * Return: returns *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
