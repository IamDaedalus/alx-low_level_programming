#include "lists.h"
#include <stdio.h>

void __attribute__((__constructor__)) get_rekt(void);

/**
  * get_rekt - this code executes before main
  * @void: returns nothing
  */
void get_rekt(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
