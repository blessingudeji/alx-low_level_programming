#include "main.h"
/**
*_strspn - This function gets the length of a prefix substring
*@s: The string
*@accept: The prefix that is to be measured
*Return: The number of bytes in the string
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				break;
			}
		}
		if (accept[k] == '\0')
		{
			return (j);
		}
	}
	return (j);
}
