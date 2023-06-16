#ifndef MAIN_H
#define MAIN_H

int _putchar(char h);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

/* mul program helpers */
unsigned long build_digit(char *in);
unsigned long mul(unsigned long a, unsigned long b);
int is_digit(char in);
void print(char *msg);

#endif
