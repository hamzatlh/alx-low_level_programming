#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the destination
 * @src: the source
 * @n: bytes copies
 * Return: dst
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
