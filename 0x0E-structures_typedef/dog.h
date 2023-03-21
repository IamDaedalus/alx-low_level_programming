#ifndef DOG_H
#define DOG_H

/**
  * struct dog - holds content for declaring a dog struct
  * @name: name of the doggy
  * @age: how old is the doggy
  * @owner: who takes care of the dog boy
  *
  * Description: this holds the contents for declaring the dog struct
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
