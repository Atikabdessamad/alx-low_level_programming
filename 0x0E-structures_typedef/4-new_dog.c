#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Create a new dog.
 * @name: String
 * @age: float
 * @owner: string
 * Return: Type of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int x, x1 = 0, x2 = 0;

	ptr = malloc(sizeof(dog_t));
	if (!ptr || !(name) || !(owner))
	{
		free(ptr);
		return (0);
	}
	while (*(name + x1))
		x1++;
	while (*(owner + x2))
		x2++;
	d->name = malloc(x2 + 1);
	d->owner = malloc(x1 + 1);
	if (!(d->name) || !(d->owner))
	{
		free(d->name);
		free(d->owner);
		free(ptr);
		return (0);
	}
	for (x = 0; i < x1; x++)
		(*d).name[x] = name[x];
	(*ptr).name[x] = '\0';
	for (x = 0; x < x2; x++)
		(*ptr).owner[x] = owner[x];
	(*ptr).owner[x] = '\0';
	d->age = age;
	return (ptr);
}
