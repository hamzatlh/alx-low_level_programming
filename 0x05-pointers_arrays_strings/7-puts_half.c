#include "main.h"
/**
 * puts2 - prints half of a string, followed by a new line
 * @str: the string
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i])
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;
	if (i % 2 != 0)
		j++;
	while (str[j])
	{
		write(1, &str[j], 1);
		j++;
	}
	write(1, "\n", 1);
}
