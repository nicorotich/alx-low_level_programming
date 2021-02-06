#include <stdio.h>

/**
 *main - prints out the tebahpla in reverse ;)
 *Return: 0 success
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}

	putchar('\n');
	return (0);
}
