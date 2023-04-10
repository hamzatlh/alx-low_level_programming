#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0
 *@n: the address of the number in hand
 *@index: the index of the bit to set
 *Return: returns 1 on succes else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
