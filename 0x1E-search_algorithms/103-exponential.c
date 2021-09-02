#include "search_algos.h"

/**
 *binary_search - searches for a value in a sorted array of integers using
 *                the Binary search algorithm
 *@array: a pointer to the first element of the array to search in
 *@size: number of elements in the array
 *@value: value to be search
 *Return: index where value is located
 */
int binary_search(int *array, size_t size, int value, size_t counter)
{
size_t lower = 0;
size_t upper = size - 1;
size_t midpoint;

while (upper >= lower)
{
if (array == NULL)
return (-1);

printf("Searching in array: ");
for (counter = lower; counter <= upper; counter++)
printf("%d, ", array[counter]);
printf("%d\n", array[counter]);
midpoint = lower + (upper - lower) / 2;

if (array[midpoint] < value)
lower = midpoint + 1;
else if (array[midpoint] > value)
upper = midpoint - 1;
else
return (midpoint);

}
return (-1);
}
/**
 *exponential_search - searches for a value in a sorted array of integers using
 *                     the Exponential search algorithm
 *@array: a pointer to the first element in the array to search in
 *@size: number of elments in the array
 *@value: value to search for
 *Return: first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
size_t mid = 1;

if (array == NULL)
return (-1);

while (mid < size && array[mid] < value) {
mid *= 2;
}

printf("Value found between indexes [%ld] and [%d]\n",
mid/2, array[mid]);
return binary_search(array, mid/2, MIN(mid, size), value);
}
