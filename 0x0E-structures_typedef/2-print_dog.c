#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	char *n, *o;
	if (d != NULL)
	{
		n = d->name == NULL ? "(nil)" : d->name;
		o = d->owner == NULL ? "(nil)" : d->owner;

		printf("Name: %s\n", n);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", o);
	}
}
