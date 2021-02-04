#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - prints the last digit of n and whether its
 *greater than 5, 0, or less than 6
 *Return: 0 success
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	printf("Last digit of %i is %i and is ", n, lastDigit);
	if (lastDigit > 5)
		printf("greater than 5\n");
	else if (lastDigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
