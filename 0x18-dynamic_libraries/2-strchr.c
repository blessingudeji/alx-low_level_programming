#include "main.h"
/**
*_strchr - This function locates a character in a string
*@c: The character to be located
*@s: The string
*Return: A pointer to the character in the string
*/
char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			return (s + j);
		}
		j++;
	}
	if (s[j] == c)
	{
		return (s + j);
	}
	else
	{
		return ('\0');
	}
}
