/*
 * File: 0-linear.c
 */
#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array
  * @array: A * to the first element of the array
  * @size: The number of elements in the array
  * @value: The value to search
  * Return: If the value is not present or the array is NULL, -1
  *         Or the first index where the value is located
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
