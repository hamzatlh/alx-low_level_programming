#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse, followed by a new line
 * @s: the string to be reverse it
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (s[i])
	{
		write (1, &s[i], 1);
		i--;
	}
	write(1, "\n", 1);
}
