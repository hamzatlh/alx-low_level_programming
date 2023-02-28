#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * rev_string -  function that reverses a string
 * @s: the string to be reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[j])
		j++;
	j--;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
