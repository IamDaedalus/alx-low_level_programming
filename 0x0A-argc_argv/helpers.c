#include "main.h"
#include <stdio.h>

/**
 * build_num - builds a number from a string
 * stackoverflow.com/questions/8611815/determine-if-char-is-a-num-or-letter
 * stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
 * @in: the string
 * Return: returns the number if everything is okay otherwise fails
 */
int build_num(const char *in)
{
	/*
	 * sign is 1 and not 0
	 * because return statement is multiplied
	 * by sign
	 */
	int result = 0, sign = 1;

	/**
	 * tried a negative plus positive and just had to account
	 * for negative numbers as well. this probably all for
	 * naught but oh well :shrug:
	 */
	if (*in == '-')
	{
		sign = -1;
		in++;
	}

	/**
	 * basically iterate through the entire str then
	 * check each char if it's a number and if it is
	 * convert it to one otherwise return -5 as an err
	 */
	while (*in != '\0')
	{
		if (*in >= '0' && *in <= '9')
		{
			result = (result * 10) + (*in - '0');
		}
		else
		{
			return (-10);
		}
		in++;
	}

	return (sign * result);
}
