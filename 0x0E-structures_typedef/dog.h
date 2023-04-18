#ifndef __DOG__
#define __DOG__
/**
 *struct dog - a struct
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 * Description: dog info
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
