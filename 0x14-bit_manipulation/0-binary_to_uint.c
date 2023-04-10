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

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			bit <<= 1;
		else if (b[i] == '1')
		{
			result += bit;
			bit <<= 1;
		}
		else
			return (0);
	}
	return (result);
}
