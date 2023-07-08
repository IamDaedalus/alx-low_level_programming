#include <stdio.h>

/**
 * binary_to_uint - converts a number from binary to dec
 * @b: an unsigned int represent the binary to convert
 * Return: returns the bin number in dec
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* shift over to the result every iteration */
		result = (result << 1) + (b[i] - '0');
		i++;
	}


	return (result);
}
