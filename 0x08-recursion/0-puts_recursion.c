#include "main.h"
/**
* _puts_recursion - This function prints a string followed
* by a new line
* @s: this is a pointer to the string
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
