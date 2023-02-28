#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the string that we calcule hi length
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

