#include "function_pointers.h"
/**
 * array_iterator - A function that executes a function
 * given as a parameter on each element in array
 * @array: array
 * @size: size of array
 * @action: a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array != NULL && action != NULL)
	{
		for (j = 0; j < size; j++)
			action(array[j]);
	}
}
