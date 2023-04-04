#include "main.h"
/**
* _strstr - This function finds the first occurence of the substring
* @needle: The substring
* @haystack: The string
* Return: A pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int j, k;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (haystack[j + k] != needle[k])
			{
				break;
			}
		}
		if (needle[k] == '\0')
		{
			return (haystack + j);
		}
	}
	return ('\0');
}

