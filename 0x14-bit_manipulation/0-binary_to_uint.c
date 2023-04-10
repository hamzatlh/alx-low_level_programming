#include "main.h"
/**
 *binary_to_uint - converts binary number to unsigned int
 *@b: the binary to convert
 *Return: the decimal representation of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit = 1;
	int i;

	if (b == NULL)
		return (0);
	for (result = 0; b && *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result <<= 1;
		result += *b - '0';
	}
	return (result);
}
