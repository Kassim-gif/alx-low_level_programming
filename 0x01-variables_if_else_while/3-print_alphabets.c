#include <stdio.h>


/**
 * main - prints the letters of the alphabets
 *
 * Return: 0
 */

int main(void)
{
/*Declarations*/
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
