#include <stddef.h>
#ifndef LISTS_H
#define LISTS_H

typedef struct list list_t;

struct list
{
	char *str;
	int len;
	list_t *next;
};

/* function prototypes */
size_t print_list(const list_t *h);


#endif
