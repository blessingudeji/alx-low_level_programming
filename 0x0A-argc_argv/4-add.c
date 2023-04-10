#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - main function
* @argc: argument counter
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/*!isdigit returns 0 if the character is a digit and 1 if it is not*/
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
