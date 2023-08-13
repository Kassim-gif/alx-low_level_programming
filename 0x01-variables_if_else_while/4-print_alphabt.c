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
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
