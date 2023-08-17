#include "main.h"

/**
 * _isalpha - checks lowercase/uppercase
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

for (upper = 'A'; upper <= 'Z'; upper++)
		{
	for (lower = 'a'; lower <= 'z'; lower++)
	{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
