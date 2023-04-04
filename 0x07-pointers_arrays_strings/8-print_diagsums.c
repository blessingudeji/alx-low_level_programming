#include "main.h"
#include <stdio.h>
/**
* print_diagsums - This function prints the sum of the two
* diagonals of a square matrix of integers
* @a: pointer input
* @size: size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int j = 0, sum1 = 0, sum2 = 0;

	while (j < size)
	{
		sum1 += a[j];
		a += size;
		j++;
	}

	a -= size;
	j = 0;

	while (j < size)
	{
		sum2 += a[j];
		a -= size;
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
