#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	char *str;
	int argc, argvc, i = 0;
	int args_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);



	argc = 0;
	while (argc < ac)
	{
		argvc = 0;
		while (av[argc][argvc] != '\0')
		{
			str[i] = av[argc][argvc];
			argvc++;
		}
		str[i] = '\n';
		argc++;
	}


	return (str);
}
