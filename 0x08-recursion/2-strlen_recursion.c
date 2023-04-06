#include "main.h"
/**
* _strlen_recursion - This function returns the length of a string
* @s: The string
* Return: The length of the string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		return (i += 1);
	}
	return (0);
}


