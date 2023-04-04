#include "main.h"
/**
*print_chessboard - This function prints the chessboard
*@a: pointer input
*Return: Nothing
*/
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}
		_putchar('\n');
	}
}
