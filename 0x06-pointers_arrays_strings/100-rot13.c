#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 * Return: s
 */
char	*rot13(char *s)
{
	int	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if ((s[idx] >= 'A' && s[idx] <= 'M')
			|| (s[idx] >= 'a' && s[idx] <= 'm'))
			s[idx] += 13;
		else if ((s[idx] >= 'N' && s[idx] <= 'Z')
			|| (s[idx] >= 'n' && s[idx] <= 'z'))
			s[idx] -= 13;
		write(1, &s[idx], 1);
		idx++;
	}
	return (s);
}
