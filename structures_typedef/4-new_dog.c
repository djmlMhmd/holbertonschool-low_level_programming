#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog_t struct.
 * @name: Pointer to a string containing the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to a string containing the name of the dog's owner.
 *
 * Return: Pointer to the newly created dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{



dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->owner = malloc(strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

strcpy(new_dog->name, name);
strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
