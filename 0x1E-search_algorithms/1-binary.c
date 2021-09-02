#include "search_algos.h"

/**
 *binary_search - searches for a value in a sorted array of integers using
 *                the Binary search algorithm
 *@array: a pointer to the first element of the array to search in
 *@size: number of elements in the array
 *@value: value to be search
 *Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
int lower = 0;
int upper = size - 1;
int counter;
int midpoint;

while (upper >= lower)
{

if (array == NULL)
return (-1);

printf("Searching in array: ");
for (counter = lower; counter <= upper; counter++)
{
if (counter != lower)
printf(", %d", array[counter]);
else
printf("%d", array[counter]);
}
printf("\n");

midpoint = lower + (upper - lower) / 2;

if (array[midpoint] == value)
return (midpoint);

if (array[midpoint] < value)
lower = midpoint + 1;

else
upper = midpoint - 1;
}
return (-1);
}
