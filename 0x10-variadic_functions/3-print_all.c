#include "variadic_functions.h"
#include <stdio.h>
/**
* print_all - a function that prints all data inputs
* @format: types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list argp;
	unsigned int i = 0;
	char *str;

	va_start(argp, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
		printf("%c", va_arg(argp, int));
		break;
		case 'i':
		printf("%i", va_arg(argp, int));
		break;
		case 'f':
		printf("%f", va_arg(argp, double));
		break;
		case 's':
		str = va_arg(argp, char*);
		if (str == NULL)
		{
		printf("(nil)");
		break;
		}
		printf("%s", str);
		break;
		default:
		break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's'))
		{
		printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(argp);
}
