#include "main.h"
/**
 * print_binary - This function prints binary
 * @n: unsigned integer
 * Return: void
 */
void print_binary(unsigned long int n)
{

	/*check if n has any bits set*/
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		/*n has no bits set, print '0'*/
		_putchar('0');
	}
}
