#include "main.h"
/**
* _strlen_recursion - This returns the length of a string
* @s: The string
* Return: returns the length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
* helper_p - helps in finding the string that is a palindrome
* is_palindrome - This finds the string that is palindrome
* @s: The string
* @a: Int type
* @b: Int type
* Return:  returns 1 if it is a palindrome otherwise 0
*/
int helper_p(char *s, int a, int b)
{
	if (s[a] != s[b])
		return (0);
	if (a >= b)
		return (1);
	return (helper_p(s, a + 1, b - 1));
}

/**
* is_palindrome - This finds the string that is palindrome
* @s: the string
* Return: returns 1 if it is a palindrome
*/
int is_palindrome(char *s)
{
	int b = _strlen_recursion(s);

	return (helper_p(s, 0, b - 1));
}
