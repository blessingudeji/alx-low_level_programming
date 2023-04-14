#include "main.h"
#include <stdlib.h>
/**
* _realloc - a function that reallocates a memory block
* using malloc and free
* @ptr: pointer to the previously allocated memory
* @old_size: size, in bytes, of the allocated space
* for ptr
* @new_size: is the new size, in bytes of the new
* memory block
* Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1 = NULL, *p2 = NULL;
	unsigned int a;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		p1 = ptr;
	}
	p2 = malloc(new_size);

	if (p2 == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < old_size && a < new_size; a++)
	{
		p2[a] = p1[a];
	}
	free(ptr);
	return (p2);
}
