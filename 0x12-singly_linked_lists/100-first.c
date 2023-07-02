#include <stdio.h>

/**
 * beat_you - a function that runs before main
 */
void __attribute__ ((constructor)) beat_you()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
