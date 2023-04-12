#include "main.h"
#include <stdlib.h>
/**
* argstostr - a function that concatenates all the
* arguments of your program
* @ac: the argument counter
* @av: the argument vector
* Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	char *argstr;
	int j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			len++;
		len++;
	}
	len++;

	argstr = malloc(sizeof(char) * len + 1);
	if (argstr == NULL)
		return (NULL);

	for (j = 0, len = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			len++;
		argstr[len] = av[j][k];
		argstr[len] = '\n';
		len++;
	}
	argstr[len] = '\0';
	return (argstr);
}
