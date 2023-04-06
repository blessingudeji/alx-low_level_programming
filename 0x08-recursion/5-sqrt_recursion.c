#include "main.h"
/**
* _sqrt_root - This function finds the natural
* square root of a number
* @n: The input
* @a: the integer to figure out
* Return: square root of n or -1
*/
int _sqrt_root(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
	return (a);
	return (_sqrt_root(n, a + 1));
}


/**
* _sqrt_recursion - This functin returns the natural square root
* of a number
* @n: The integer to find the square root of
* Return: squareroot of n or -1
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_root(n, 1));
}
