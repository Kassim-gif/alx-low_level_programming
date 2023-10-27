#include <stdio.h>

/**
 *main - Entry poinear
 *
 *@argc: Number of comand line arguents
 *@argv: An array containing str values of rthe command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
