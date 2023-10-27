#include "main.h"

/**
 * _strstr - searching func
 * @haystack: 1st ag
 * @needle: 2nd ag
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *res = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
				break;
		}
		if (!*needle)
			return (res);
		needle = fneedle;
		res++;
		haystack = res;
	}
	return (0);
}
