#include <stdlib.h>
#include "main.h"
/**
* string_nconcat - a function that concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		p[a] = s1[a];

	for (; a < len1 + n; a++)
		p[a] = s2[a - len1];
	p[a] = '\0';

	return (p);
}
