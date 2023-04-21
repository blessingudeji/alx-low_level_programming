#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - a function that prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argn;
	unsigned int a;

	va_start(argn, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(argn, int));

	if (separator != NULL && a != (n - 1))

		printf("%s", separator);

	}
	printf("\n");

	va_end(argn);
}
