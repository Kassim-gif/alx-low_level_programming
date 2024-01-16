#include "main.h"
/**
 * wildcmp - compares tha two strings and returns 1
 * if tha strings can be considered identical,
 * otherwise return 0.
 * @s1: tha normal string
 * @s2: tha special string containing "*"
 *
 * Return: 1 if its identical, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
