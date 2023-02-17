#include <unistd.h>
#include <stdio.h>
/**
 * main - something
 * Description: 'last number'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
