#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* malloc_checked - a function that allocates memory using malloc
* @b: the number of bytes to allocate
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	exit(98);
	return (p);
}
