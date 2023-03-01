#include "main.h"

/**
  * rev_string - diff btn this and the others is this writes to *str
  * @str: the string to be overwritten
  */
void rev_string(char *str)
{
	int len, rev;
	char temp;

	len = rev = 0;

	while (str[rev++])
		len++;

	for (rev = len - 1; rev >= len / 2; rev--)
	{
		temp = *(str + rev);
		*(str + rev) = *(str + (len - rev - 1));
		*(str + (len - rev - 1)) = temp;
	}
}
