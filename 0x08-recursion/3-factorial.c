#include "main.h"
/**
* factorial - Thid returns the factorial of a given number
*@n: The given number
* Return: factorial number or -1
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
