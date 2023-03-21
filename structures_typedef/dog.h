#ifndef DOG_H
#define DOG_H

/**
 * struct dog_t - structure contains information about a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog_t
{
char *name;
float age;
char *owner;
};


void print_dog(struct dog *d);



#endif
