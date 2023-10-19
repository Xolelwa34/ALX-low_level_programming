#include "holberton.h"
/**
 * argstostr - Actual args
 * @ac: number of arguments
 * @av: input of args
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, c = 0, x = 0, s = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (c < ac)
	{
		x = 0;
		while (av[c][x] != '\0')
		{
			count++;
			x++;
		}
		c++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < ac; c++)
	{
		for (x = 0; av[c][x] != '\0'; x++)
		{
			str[s] = av[c][x];
			s++;
		}
		str[s] = '\n';
		s++;
	}
	return (str);
}
