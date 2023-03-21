#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure contains information about a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
