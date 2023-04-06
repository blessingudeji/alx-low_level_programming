#include "main.h"
/**
* _is_prime_n - This function helps to check
* if the number is a prime number
* @n: The number to check if it is a prime number
* @a: n divider
* Return: 1 if n is a prime number otherwise 0
*/
int _is_prime_n(int n, int a)
{
	if (n % a == 0)
		return (0);
	if (a * a > n)
		return (1);
	if (n <= 2)
		return (n == 2);
	return (_is_prime_n(n, a + 1));
}

/**
* is_prime_number - It checks if the number is a prime number
* @n: checks if the number is a prime number
*
* Return: 1 if n is a prime number otherwise 0
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_is_prime_n(n, 2));
}
