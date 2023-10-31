#include "main.h"
#include <stdio.h>
/**
  * append_text_to_file - appends text at the end of a file
  * @filename: file to append
  * @text_content: content to append
  * Return: Always 0.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, len, w_words;

	if (filename == NULL)
		return (-1);
	append_file = open(filename, O_WRONLY | O_APPEND);
	if (append_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len]; len++)
		;
	w_words = write(append_file, text_content, len);
	close(append_file);
	return (w_words == -1 ? -1 : 1);
}
