#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: the string
 * @n: bytes of the memory
 * @b: constant byte
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)b;
		i++;
	}
	return (s);
}
