#include "main.h"
/**
*_pow_recursion - This function returns the value of
* x raised to the power of y.
* @x: integer to be raised
* @y: The power
* Return: the value of the integer
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

