#include "main.h"
#include <stdio.h>
/**
  * main - main entry
  * @ac: argument
  * @av: array of arguments
  * Return: Always 0.
  */
int main(int ac, char *av[])
{
	int file_from, file_to, arr_len, w_len;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	arr_len = 1;
	while (arr_len)
	{
		arr_len = read(file_from, buffer, BUFSIZ);
		if (arr_len == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (arr_len > 0)
		{
			w_len = write(file_to, buffer, arr_len);
			if (w_len != arr_len || w_len == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_to), exit(100);
	return (0);
}
