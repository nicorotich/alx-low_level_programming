#include <stdio.h>
/**
 *main - entry point
 *Description: prints out all the numbers between 00 and 99
 *Return: 0 success
 */
int main(main)
{
	int num;

	for (num = 0; num < 100; num++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		if (num < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
