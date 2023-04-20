#include "function_pointers.h"
/**
 * print_name - a function that prints name
 * @name: the name to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
