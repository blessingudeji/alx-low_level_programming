#include "search_algos.h"
/**
 * recursive_search - searches for a value in an array
 * @array: Array
 * @size: Size of the array
 * @value: Value to search
 * Return: Index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2, i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - Searches for a value using
 * the binary search algorithm
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search
 * Return: Index of number searched for.
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = recursive_search(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
