#ifndef DOG_H
#define DOG_H

/**
  * struct dog - holds content for declaring a dog struct
  * @name: first member
  * @age: second member
  * @owner: third member
  *
  * Description: this holds the contents for declaring the dog struct
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
