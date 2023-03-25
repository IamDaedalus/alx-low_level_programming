#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


/* these are the prototypes needed for the program */
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int _putchar(char c);
int (*get_op_func(char *s))(int, int);

#endif
