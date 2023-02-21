#include "main.h"

/**
 * main - something
 * Description: 'print alphabet'
 * Return: Always 0 (Success)
 */

void	print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}

int main(void)
{
	print_alphabet();
	return (0);
}
