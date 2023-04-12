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
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];
	cpy[len] = '\0';

	return (cpy);
}
