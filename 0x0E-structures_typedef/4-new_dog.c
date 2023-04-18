#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;
	dog_t *newdog;

	newdog = &d;
	if (!newdog)
		return (NULL);
	if (!newdog->name)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = name;
	newdog->age = age;
	if (!newdog->owner)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = owner;
	return (newdog);
}
