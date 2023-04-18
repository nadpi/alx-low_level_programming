#ifndef __DOG__
#define __DOG__
/**
 *struct dog - a struct
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 * Description: dog info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
