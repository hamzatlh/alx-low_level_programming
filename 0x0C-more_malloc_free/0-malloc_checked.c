#include "main.h"

/**
 *malloc_checked - allocates memory
 *@b: bytes to allocate
 *Return: the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
