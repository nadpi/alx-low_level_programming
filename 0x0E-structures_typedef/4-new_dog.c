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
	if (newdog->name && newdog->owner)
	{
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	}
	else
		return (NULL);
	return (newdog);
}
