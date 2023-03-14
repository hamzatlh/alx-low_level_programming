#include "main.h"

/**
 *_strlen - size of the string
 *@s: the string
 *Return: the number of chars in the string
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 *str_concat - concatenate two strings
 *@s1: the first string
 *@s2: the second string
 *Return: the new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int size;
	char *str;
	int i = 0;
	int j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	size = _strlen(s1) + _strlen(s2) + 1;
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[size] = '\0';
	return (str);
}
