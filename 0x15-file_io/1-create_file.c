#include "main.h"
/**
  * create_file - Can be used to access the file
  * @filename: name of the file to create
  * @text_content: contents of the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int new_file, len, w_words;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(new_file);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	w_words = write(new_file, text_content, len);
	if (close(new_file) == -1)
		return (-1);
	return (w_words == -1 ? -1 : 1);
}
