#include "main.h"
/**
* wildcmp - This function compares two strings
* @s1: The first string
* @s2: The second string
* Return: returns 1 if the strings are identical otherwise 0
*/
int wildcmp(char *s1, char *s2)
{
	/*they match if they are both empty*/
	if (*s1 == '\0' && *s2 == '\0')
	return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
				return (1);
	}
	/*when none of this conditions are met, it returns 0 because 
	  the strings don't match*/
	return (0);
}

