#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to tha first element of tha array to search.
  * @left: Tha starting index of tha [sub]array to search.
  * @right: Tha ending index of tha [sub]array to search.
  * @value: Tha value to search for.
  *
  * Return: If tha value is not present or tha array is NULL, -1.
  *         Otherwise, tha index where tha value is located.
  *
  * Description: Prints tha [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to tha first element of tha array to search.
  * @size: Tha number of elements in tha array.
  * @value: Tha value to search for.
  *
  * Return: If tha value is not present or tha array is NULL, -1.
  *         Otherwise, tha index where tha value is located.
  *
  * Description: Prints a value every time it is compared in tha array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
