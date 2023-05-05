#include "main.h"
/**
 * clear_bit - sets the value of bit to 0 at a given index
 * @n: unsigned long int
 * @index: index to clear
 * Return: 1 if successful otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	/*
	 *Shift 1 to the left by index to create a mask
	 *a mask with all bits set except for the bit at the given index
	 *perform a bitwise AND operation with the original value to clear
	 *the bit at the given index
	 */
	*n &= ~(1 << index);

	return (1);
}
