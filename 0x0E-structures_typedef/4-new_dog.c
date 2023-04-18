#include "dog.h"
/**
 * new_dog -  creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog d;
	struct dog *newdog;

	newdog = &d;
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
