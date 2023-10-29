#include "main.h"

/**
  * _islower - that checks for lowercase character.
  * @c: The character to be checked
  *
  *Return: 1 when c is lower, or 0 when is isn't lower
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
