#include "main.h"
/**
* _memset - This function fills the memory with a constant byte
* @s: memory that needs to be filled
* @b: The constant byte
* @n: number of bytes
* Return: returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
