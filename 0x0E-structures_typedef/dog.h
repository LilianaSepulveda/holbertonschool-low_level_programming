#ifndef DOG_H
#define DOG_H

/**
 *struct dog - contains data of name, age and owner of each dog
 *@name: first member, name of the dog
 *@age: second member, age of the dog
 *@owner: third member, owner of the dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 *dog_t - New type as a new name for the type struct dog
 *
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
