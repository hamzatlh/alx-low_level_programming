#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] && (s[i] >= 'a' && s[i] <= 'z'))
		s[i] -= 32;
	i++;
	while (s[i])
	{
		if ((s[i] == 32 || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '!'
			|| s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')'
			|| s[i] == '{' || s[i] == '}' || s[i] == '\t' || s[i] == '.')
			&& s[i + 1] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}
	return (s);
}
