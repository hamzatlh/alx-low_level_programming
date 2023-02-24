#include <unistd.h>
#include <stdio.h>
/**
 * main - something
 * Description: 'print'
 * Return: Always 0 (Success)
 */
#include <unistd.h>

int main(void)
{
    int n = 0;
    while (n < 1000)
    {
        int first = n / 100;
        int second = (n / 10) % 10;
        int third = n % 10;
        if (first != second && first != third && second != third && first < second && second < third)
        {
            if (n != 789)
            {
                putchar(first + '0');
                putchar(second + '0');
                putchar(third + '0');
                putchar(',');
                putchar(' ');
            }
            else
            {
                write(1, &first, 1);
		write(1, &second, 1);
		write(1, &third, 1);
            }
        }
        n++;
    }
    return (0);
}

