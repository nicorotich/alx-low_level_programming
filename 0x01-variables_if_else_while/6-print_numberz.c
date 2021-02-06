#include <stdio.h>

/**
 *main- prints out all numbers under 10 using putchar function
 *Return: 0 success
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
