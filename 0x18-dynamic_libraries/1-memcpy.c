#include "main.h"
/**
* _memcpy - This function copies bytes from memory area
* @dest: Memory area
* @src: the memory area
* @n: number of bytes
* Return: returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
	dest[j] = src[j];
	j++;
	}
	return (dest);
}
