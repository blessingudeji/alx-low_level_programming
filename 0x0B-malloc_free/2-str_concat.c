#include "main.h"
#include <stdlib.h>
/**
* str_concat - a function that concatenates two strings
* @s1: first string
* @s2: second string
* Return: concatated string otherwise NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i, j = 0, len = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	c = malloc(sizeof(char) * len);
		if (c == NULL)
			return (NULL);
	for (i = 0; s1[i]; i++)
		c[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		c[j++] = s2[i];
	return (c);
}
