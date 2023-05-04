#include "main.h"
/**
 * get_bit - This function gets bit
 * @n: unsigned long int
 * @index: unsigned int value
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* If index is larger than the number of bits in n */
	if (index > 64)
		return (-1);

	return (n >> index & 1);
}
