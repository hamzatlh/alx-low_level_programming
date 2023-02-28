#include "main.h"
/**
 * _puts -  function that prints a string, followed by a new line, to stdout
 * @str: the string to print
*/
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
