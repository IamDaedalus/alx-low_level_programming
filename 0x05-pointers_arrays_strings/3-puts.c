#include "main.h"

/**
  * _puts - prints every character with a new line at the end
  * @str: string coming in
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
