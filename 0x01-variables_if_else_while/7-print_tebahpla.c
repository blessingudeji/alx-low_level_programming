#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int n = 122;

	while (n <= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
