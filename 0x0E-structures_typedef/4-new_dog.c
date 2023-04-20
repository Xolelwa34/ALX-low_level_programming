#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - This fuction creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: pointer to the new dog.
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *flappi;
	char *n, *o;
	int a = 0, b = 0;

	flappi = malloc(sizeof(dog_t));
	if (flappi == NULL)
		return (NULL);
	for (; *(name + a); a++)
		;
	for (; *(owner + b); b++)
		;
	n = (char *)malloc(sizeof(char) * (a + 1));
	o = (char *)malloc(sizeof(char) * (b + 1));

	if (!(n && o))
	{
		if (!o && n)
			free(n);
		free(flappi);
		return (NULL);
	}
	for (; a >= 0; a--)
		*(n + a) = *(name + a);
	for (; b >= 0; b--)
		*(o + b) = *(owner + b);
	flappi->name = n;
	flappi->age = age;
	flappi->owner = o;
	return (flappi);
}