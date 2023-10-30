#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads the text from the text file
 *
 * @filename: name of a file to read
 * @letters: number of chars
 *
 * Return: actual number of letters that can print and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0;
	int length = 0;
	int words = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	length = read(fd, buffer, letters);
	if (length == -1)
	{
		free(buffer);
		return (0);
	}

	words = write(STDOUT_FILENO, buffer, length);
	if (words == -1 || words != length)
	{
		free(buffer);
		return (0);
	}
	close(file);
	free(buffer);
	return (words);
}
