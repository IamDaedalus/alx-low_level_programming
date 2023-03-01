#include "main.h"

/**
  * puts2 - prints every other char in the string
  * @str: the incoming string
  */
void puts2(char *str)
{
	int length = 0, index = 0;

	while (str[index++])
		length++;

	for (index = 0; index < length; index += 2)
		_putchar(*(str + index));

	_putchar('\n');
}
