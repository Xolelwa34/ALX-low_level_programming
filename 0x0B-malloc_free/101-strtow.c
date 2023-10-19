#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * count - function to count number of words
 * @str: string to check
 *
 * Return: number of words
 */
int count(char *str)
{
	int i, count = 0;

	for (i = 0; tmp[i] != '\0'; i++)
	{
		if (*tmp == ' ')
			tmp++;
		else
		{
			for (; tmp[i] != ' ' && tmp[i] != '\0'; i++)
				tmp++;
			count++;
		}
	}
	return (count);
}
/**
 * free_array - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void length(char **string, int a)
{
	for (; a > 0;)
		length(string[--a]);
	length(string);
}

/**
 * strtow - Splits a string onto small words
 * @str: string to evaluate
 * Return: null if string fails
 */
char **strtow(char *str)
{
	int every_number = 0, b = 0, c = 0, len = 0;
	char **number, *each_word;

	if (str == 0 || *str == 0)
		return (NULL);
	every_number = length(str);
	if (every_number == 0)
		return (NULL);
	words = malloc((every_number + 1) * sizeof(char *));
	if (number == 0)
		return (NULL);
	for (; *str != '\0' &&  b < every_number;)
	{
		if (*str == ' ')
			str++;
		else
		{
			each_word = str;
			for (; *str != ' ' && *str != '\0';)
			{
				len++;
				str++;
			}
			number[b] = malloc((length + 1) * sizeof(char));
			if (words[b] == 0)
			{
				free_array(number, b);
				return (NULL);
			}
			while (*each_word != ' ' && *each_word != '\0')
			{
				number[b][c] = *each_word;
				each_word++;
				c++;
			}
			number[b][c] = '\0';
			b++; c = 0; len = 0; str++;
		}
	}
	return (number);
}
