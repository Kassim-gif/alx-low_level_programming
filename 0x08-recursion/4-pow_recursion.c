#include "main.h"

/**
 * _pow_recursion - returns tha value of x raised on to tha power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of tha power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
