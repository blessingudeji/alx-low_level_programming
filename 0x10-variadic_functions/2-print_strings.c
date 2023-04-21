#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - a function that prints strings, followed by a new line
* @separator: the string to be printed between the strings
* @n: the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	char *argstr;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		argstr = va_arg(args, char *);
		if (argstr == NULL)
			printf("(nil)");
		else
			printf("%s", argstr);


		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
