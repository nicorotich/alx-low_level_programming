#include <stdio.h>

/**
 * main - prints "Fizz" for numbers divisible by 3,
 * prints "Buzz" for numbers divisible by 5,
 * prints "FizzBuzz" for numbers divisible by 3 and 5
 * for numbers 1-100
 * Return: 0;
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
