#include "main.h"
/**
*_strpbrk - This function searches a string for any set of bytes
*@s: The string
*@accept: The bytes the function searches for
*Return: A pointer to the byte matched
*/
char *_strpbrk(char *s, char *accept)
{
	int j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				return (s + j);
			}
		}
	}
	return ('\0');
}
