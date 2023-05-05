#include "main.h"
/**
 * set_bit - sets the value of a bit
 * to 1 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 if successful other wise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	/*Check if the index is greater than the number*/
	  /*of bits in an unsigned long int variable*/
	if (index > 64)
	{

		/*Return -1 if the index is out of range*/
		return (-1);
	}
	*n |= (1 << index);

	/*Return 1 to indicate success*/
	return (1);
}
