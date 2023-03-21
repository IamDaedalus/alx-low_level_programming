#include "dog.h"
#include <stdio.h>

/**
  * print_dog - prints the details of a struct
  * @d: the struct to print details from
  */
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
