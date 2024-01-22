#include "dog.h"
#include "string.h"
#include <stdlib.h>

/**
 * new_dog - function name
 * @name: name param
 * @age: age param
 * @owner: owner param
 * Return: returns type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	for (i = 0 ; name[i] != '\0' ; i++)
		len1++;
	for (j = 0 ; owner[j] != '\0' ; j++)
		len2++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
