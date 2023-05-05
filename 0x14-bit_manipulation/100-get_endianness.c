#include "main.h"
/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int count = 1;

	/* cast the address of the counter to a char pointer */
	char *endian = (char *)&count;

	/*check the first byte of the counter,if it's not zero,it is little endian */
	if (*endian)
		return (1);
	else
		return (0);/* otherwise, it's big endian */
}
