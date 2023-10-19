#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates the string arguments.
 * @s1: 1st string
 * @s2: 2nd  string
 *
 * Return: Concat of string1 and string2
 */
char *str_concat(char *s1, char *s2)
{
	int i, p, st1, st2, st;
	char *result;

	st1 = st2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			st1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			st2++;
	}

	st = st1 + st2;
	result = (char *)malloc(sizeof(char) * (st + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < st1; i++)
		result[i] = s1[i];
	for (p = 0; p < st2; p++, i++)
		result[i] = s2[p];
	result[st] = '\0';

	return (result);
}
