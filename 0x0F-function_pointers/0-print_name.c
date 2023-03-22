/**
  * print_name - prints the name of a person based on a func pointer
  * @name: the name to pass as an argument
  * @f: the function to pass as a pointer
  */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
