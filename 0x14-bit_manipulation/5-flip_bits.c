#include "main.h"
/**
 * flip_bits - flips bits
 * @n: unsigned int
 * @m: unsigned int
 * Return: unsigned int value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* variable to store the XOR of n and m */
	unsigned long int flip = 0;
	/* variable to store the number of bits that need to be flipped */
	unsigned long int i = 0;

	/* XOR of n and m will have 1s in the bits that are different */
	flip = n ^ m;
	while (flip > 0)
	{
		/* if the least significant bit of flip is 1, increment i */
		i += flip & 1;

		/* then shift flip to the right by 1 bit */
		flip >>= 1;
	}
	return (i);
}
