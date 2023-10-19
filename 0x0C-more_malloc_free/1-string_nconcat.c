#include "main.h.h"
#include <stdlib.h>
/**
* string_nconcat - prints concatenate string
* @s1: input
* @s2: input string.
* @n: len s2 string for print.
* Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int c)
{
	unsigned int l1, i, e;
	char *d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	while (s1[l1])
		l1++;

	d = malloc(sizeof(*d) * l1 + c + 1);

	if (d == NULL)
		return (NULL);

	for (i = 0, e = 0; i < (l1 + c); i++)
	{
		if (i < l1)
		{
			d[i] = s1[i];
		}
		else
		{
			d[i] = s2[e++];
		}
	}
	d[i] = '\0';
	return (d);
}
