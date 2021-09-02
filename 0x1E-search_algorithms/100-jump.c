#include "search_algos.h"

/**
 *jump_search - searches for a value in a sorted array of integers using
 *              the Jump search algorithm
 *@array: a pointer to the first element in the array to search in
 *@size: nuber of elements in the array
 *@value: value to search for
 *Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
size_t previous;
size_t interval = sqrt(size);
size_t x;

if (array == NULL)
return (-1);

while (array[interval] <= value && interval < size)
{

printf("Value checked array[%ld] = [%d]\n", interval
, array[interval]);
previous = interval;
interval += sqrt(size);
if (previous > size - 1)
return (-1);
}
printf("Value found between indexes[%ld] and [%d]\n",
interval, array[interval]);

for (x = previous; x <= interval; x++)
{
if (array[x] == value)
return (x);
printf("Value checked array[%ld] = [%d]\n", x, array[x]);
}

return (-1);
}
