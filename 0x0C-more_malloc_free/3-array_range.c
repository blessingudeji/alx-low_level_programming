#include "main.h"
#include <stdlib.h>
/**
* array_range - a function that creates an arrayvof integers
* @min: minimum
* @max: maximum
* Return: Pointer to the new array
*/
int *array_range(int min, int max)
{
	int *p;
	int a;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));

	if (!p)
		return (NULL);

	for (a = 0; a <= (max - min); a++)
		p[a] = min + a;

	return (p);
}
