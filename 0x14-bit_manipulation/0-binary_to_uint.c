#include "main.h"
/**
 * binary_to_uint - This function converts binary to uint
 * @b: binary to convert
 * Return: converted int or 0
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')/* If the current char is '1', set the bit in the result to 1*/
			result = (result << 1) | 1;

		/*If the current char is '0', shift the result left by 1 bit*/
		else if (*b == '0')
			result <<= 1;
		else
			/*If the current character is not '0' or '1', return 0*/
			return (0);
		b++;
	}
	/* Return the converted unsigned integer*/
	return (result);
}
