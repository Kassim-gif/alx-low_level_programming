#include "main.h"

/**
 * print_alphabet_x10 - Prints all  alphabets in lower case 10 times
 *
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char mychar;
	int n;

	n = 0;
	while (n++ < 10)
	{
		for (mychar = 'a'; mychar <= 'z'; mychar++)
			_putchar(mychar);

		_putchar('\n');
	}
}
