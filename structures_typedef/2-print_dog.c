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
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");

}
