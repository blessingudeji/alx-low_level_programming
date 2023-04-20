#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - main function
* @argc: argument counter
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, j;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j =  atoi(argv[3]);

	printf("%d\n", func(i, j));
	return (0);
}
