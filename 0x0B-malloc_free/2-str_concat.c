#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _len - get the str length
 *
 *@str: the str whose length is calculated
 *
 * Return: str len
 */
int  _len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * str_concat - check the code for ALX School students.
 *@s1: 1st str
 *@s2: 2nd str
 * Return: Str pointer to the str
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, len1, len2;

	if (!s1)
		s1 = "", len1 = 0;
	else
		len1 = _len(s1);
	if (!s2)
		s2 = "", len2 = 0;
	else
		len2 = _len(s2);

	s = malloc(sizeof(char) * (len1 + len2) + 1);

	if (s == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s[i + j] = s2[j];
		j++;
	}

	s[j + i] = '\0';

	return (s);
}
