#include <unistd.h>
#include <stdio.h>
/**
 * main - something
 * Description: 'complete the code'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int first;
	int second;
	n = 0;
	
	while (n < 100)
	{
		first = n / 10;
		second = n % 10;
		if (first != second && first < second)
		{
			if (n != 89)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar(first + '0');
				putchar(second + '0');
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}
