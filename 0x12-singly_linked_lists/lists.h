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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

/* helpers */
int _strlen(const char *s);

#endif
