#include "dog.h"
/**
 * init_dog - Initialize a type struct dog.
 * @d: Type for dog
 * @name: Str
 * @age: Float
 * @owner: Str
 * Retunr: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
