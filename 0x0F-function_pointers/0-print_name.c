#include "function_pointers.h"

/**
 * print_name - passes a name to a function pointer and then
 * calls it
 * @name: the name to print
 * @f: the function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
