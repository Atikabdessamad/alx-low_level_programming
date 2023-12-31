#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure for Dog.
 * @name: String, name the dog
 * @age: Float, age the gog
 * @owner: String, owner name
 *
 * Descriotion: Define new type struct dog with name, age, owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Define type of dog.
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
