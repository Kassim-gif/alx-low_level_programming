#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of passed args
 * @argv: array of  args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		prod *= atoi(argv[i]);
	}
	printf("%d\n", prod);
	return (0);
}
