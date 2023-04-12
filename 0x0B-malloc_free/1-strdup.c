#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a new string
* @str: the string
* Return: returns a pointer to the duplicated string
* It returns NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	char *cpy;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];
	return (cpy);
}
