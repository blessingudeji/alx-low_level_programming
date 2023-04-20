#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: is a pointer to the function to be used
 * to compare values
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
