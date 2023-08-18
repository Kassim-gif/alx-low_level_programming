#include "main.h"
#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	for (; i < 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
    else if (i % 3 == 0)
			printf("Fizz ");
	}
	printf("Buzz\n");

	return (0);
}
