#include "main.h"

/**
 *flip_bits - returns the number of bits to flip in n to get the m
 *@n: the number n
 *@m: the number m
 *Return: return the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int i = 0;

	while (result)
	{
		i++;
		result &= result - 1;
	}
	return (i);
}
