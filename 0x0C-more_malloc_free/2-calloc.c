#include "main.h"
#include <stdlib.h>
/**
* _calloc - function that allocates memory for an array of nmemb elements
* @nmemb: number of elements
* @size: size of elements
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		*(p + a) = 0;
	return (p);
}
