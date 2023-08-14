#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Create a new dog
 * @name: str
 * @age: float
 * @owner: str
 * Return: ptr
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
	ptr->name = malloc(x1 + 1);
	ptr->owner = malloc(x2 + 1);
	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (0);
	}
	for (x = 0; x < x1; x++)
		(*ptr).name[x] = name[x];
	(*ptr).name[x] = '\0';
	for (x = 0; x < x2; x++)
		(*ptr).owner[x] = owner[x];
	(*ptr).owner[x] = '\0';
	ptr->age = age;
	return (ptr);
}
