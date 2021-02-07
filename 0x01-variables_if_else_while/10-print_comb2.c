#include <stdio.h>
/**
 * main- Entry point
 * Description - print numbers from 00 to 90 seperated by ,
 * Return: 0 success
 */
int main(main)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 57 && j == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(\'n');
	return (0);
}
