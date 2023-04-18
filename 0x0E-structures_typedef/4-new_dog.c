#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - copies a string from src to dest
 * @src: source
 * @dest: destination
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (j == i)
		{
			dest[j] = '\0';
			break;
		}
		dest[j] = src[j];
	}
	return (dest);
}
/**
 * new_dog -  creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);
	newdog->age = age;
	return (newdog);
}
