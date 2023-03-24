/**
  * print_name - prints the name of a person based on a func pointer
  * @name: the name to pass as an argument
  * @f: the function to pass as a pointer
  */
void print_name(char *name, void (*f)(char *))
{
	/* you really can't trust anyone huh! you need to make checks here too */
	if (name && f)
		(*f)(name);
}
