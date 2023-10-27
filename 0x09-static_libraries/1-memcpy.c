#include "main.h"
/**
 * _memcpy - _memcopy func
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
