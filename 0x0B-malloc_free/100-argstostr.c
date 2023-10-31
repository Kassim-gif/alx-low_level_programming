#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _len - length of a string
 * @s: input char
 * Return: length of a string
 */

int _len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * argstostr - concat
 * @ac: count
 * @av: vector
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len, R = 0;
	char *p;

	if (!ac || !av)
		return (NULL);

	R = 0;

	for (i = 0; i < ac; i++)
	{
		len = _len(av[i]) + 1;
		R += len;
	}
	p = malloc(sizeof(char) * R + 1);

	if (!p)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = _len(av[i]);

		for (j = 0; j < len; j++, k++)
		{
			p[k] = av[i][j];
		}
		p[k++] = '\n';
	}
	p[k] = '\0';
	return (p);
}
