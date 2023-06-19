#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the members of a struct dog
 * @d: the struct dog to print its members
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->owner = !d->owner ? "(nil)" : d->owner;
		d->name = !d->name ? "(nil)" : d->name;

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
