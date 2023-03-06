#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the first occurence of the character
 * Return: a pointer to the first occurrence of the character c,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return (s);
	return (NULL);
}
