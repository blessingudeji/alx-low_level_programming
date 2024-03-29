#include "search_algos.h"
/**
 * linear_search - searches for a value using the
 * Linear search algorithm
 * @array: A pointer to the first element
 * @size: Number of elements in array
 * @value:  The value to search for
 * Return: -1 if the value not present in array or NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
