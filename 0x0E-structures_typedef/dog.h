#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: first param
 * @age: second param
 * @owner: third param
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
