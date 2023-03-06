#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
				i++;
				j = 0;
	}
	return (0);
}
