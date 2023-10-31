#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated
 *space in memory,which contains a copy of the string
 *given as a parameter.
 *
 * @str: a point to a str of chars
 *
 * Return: A pointer to str
 */

char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *newstr;

	if (!str)
		return (NULL);

	while (*(str + len))
		len++;
	len++;
	newstr = malloc(sizeof(char) * len);
	if (newstr == NULL)
		return (NULL);
	for ( ; i <= len; i++)
		newstr[i] = str[i];

	return (newstr);
}
