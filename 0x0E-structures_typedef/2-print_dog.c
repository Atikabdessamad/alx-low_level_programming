#include "dog.h"
#include <stdio.h>
/**
 *print_dog - print dog info
 *@d: dog information struct holder
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner %s\n", d->owner ? d->owner : "(nil)");
	}
}
int main(void)
{
	struct dog my_dog;
	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);

	return (0);
}
