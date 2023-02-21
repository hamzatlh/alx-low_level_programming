#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 * followed by a new line.
*/

void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
		i++;
	}
}
