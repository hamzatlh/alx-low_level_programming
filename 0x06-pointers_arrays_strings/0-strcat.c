#include "main.h"

/**
 *_strcat - a function that concatenates two strings.
 *@dest: destination
 *@src: source string
 *Return:  string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
