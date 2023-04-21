#include "variadic_functions.h"
/**
* sum_them_all -  a function that returns the sum of all its parameters
* @n: integers
* Return: Sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list argn;
	unsigned int a, sum = 0;

	if (n == 0)
		return (0);

	va_start(argn, n);

	for (a = 0; a < n; a++)
		sum = sum + va_arg(argn, int);
	va_end(argn);
	return (sum);
}

