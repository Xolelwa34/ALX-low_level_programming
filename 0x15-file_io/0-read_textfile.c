#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads the text from the text file
 *
 * @filename: name of a file to read
 * @letters: number of chars
 *
 * Return: actual number of letters that can print and read
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	char buffer;
	ssize_t file;
	ssize_t w;
	ssize_t len;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	len = read(len, buffer, letters);
	w = write(STDOUT_FILENO, buffer, len);

	free(buffer);
	close(file);
	return(w);
}
