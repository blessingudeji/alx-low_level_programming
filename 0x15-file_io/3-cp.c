#include "main.h"
/**
 * main - copies the content of a file to another
 * @ac: argument count parameter
 * @av: argument vector parameter
 * Return: 0 when successful or an exit
 */
int main(int ac, char **av)
{
	int fFrm, fTo, wrten, reed;
	char buffer[1024];

	if (ac != 3)/*Check if the correct number of arguments is provided*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fFrm = open(av[1], O_RDONLY);/*Open the source file in read-only mode*/
	if (fFrm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fTo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	while ((reed = read(fFrm, buffer, 1024)) > 0)
	{
		wrten = write(fTo, buffer, reed);
		if (wrten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (reed == -1)/*Check if there was an error reading from the source file*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	if (close(fFrm) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fFrm), exit(100);
	}
	if (close(fTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fTo), exit(100);
	}
	return (0);/*Return 0 on success*/
}
