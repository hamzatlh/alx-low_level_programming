#include "main.h"

/**
 *_calloc - allocates memory
 *@nmemb: number of elements
 *@size:  size of each element
 *Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (!memory)
		return (NULL);
	while (i < nmemb * size)
	{
		((unsigned char *)memory)[i] = 0;
		i++;
	}
	return (memory);
}
