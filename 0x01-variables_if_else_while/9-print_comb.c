#include <stdio.h>


/**
 * main - prints the digits of the alphabets
 *
 * Return: 0
 */

int main(void)
{
/*Declarations*/
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
	/*putchar(digit);*/
	putchar(digit);

	if (digit != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
