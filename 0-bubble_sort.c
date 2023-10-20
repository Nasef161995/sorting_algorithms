#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - function sorts array of integers in ascending order
 *
 * @array: array of integer
 * @size: number of elements
 */

void bubble_sort(int *array, size_t size)
{
size_t i;
size_t j;
int temp;
int flag;
/*outer loop (number of passes)*/
for (i = 0; i < size; i++)
{
flag = 0;
/*inner loop (comparison and swap)*/
for (j = 0; j < size - 1 - i; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);/*print array after swapping*/
flag = 1;
}
}

if (flag == 0)
break;
}
}
