#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that duplicates a string
 *
 * @str: Character
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *pet;
	int i, tsr;

	pet = malloc(sizeof(str));

	i = len = 0;
	while (str[i] != '\0')
	{
		tsr++;
		i++;
	}

	if (pet == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		pet[i] = str[i];
		i++;
	}

	return (pet);
}
