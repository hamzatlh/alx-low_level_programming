#include <unistd.h>
#include <stdio.h>
/**
 * main - something
 * Description: 'complete the code'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	i = 10;

	write(1, "01, 02, 03, 04, 05, 06, 07, 08, 09", 35);
	while (i < 100)
	{
		if (i % 10 > i / 10)
		{
			putchar(',');
			putchar(' ');
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
