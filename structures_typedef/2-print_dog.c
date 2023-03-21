/**
 * print_dog - print dog information
 * @d: Pointer to the struct dog variable to initialize.
 *
 *
 */

#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("name: %s\n", d->name ? d->name : "(nil)");
printf("age: %.6f\n", d->age);
printf("owner %s\n", d->owner);

}
