#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - function sorts array of integers in ascending order
 *
 * @array: array of integer
 * @size: number of elements
 */
void quick_sort(int *array, size_t size)
{
if (array)
quicksort_recusion(array, 0, size - 1, size);
}

/**
* swap - .........
* @x: .....
* @y: .....
*/
void swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}

/**
* partition - .........
* @array: .....
* @lower: .....
* @upper: ....
* @size: ....
* Return: ....
*/
int partition(int array[], int lower, int upper, size_t size)
{
int pivot;
int i, j;
pivot = array[upper];
i = lower - 1;
for (j = lower; j < upper; j++)
{
if (array[j] <= pivot)
{
i++;
swap(&array[i], &array[j]);
if (i != j)
print_array(array, size);
}
}
/* Swap the pivot element to correct position */
if (array[i + 1] != array[upper])
{
swap(&array[i + 1], &array[upper]);
print_array(array, size);
}

return (i + 1);
}

/**
* quicksort_recusion - .........
* @array: .....
* @lower: .....
* @upper: ....
* @size: ....
*/

void quicksort_recusion(int array[], int lower, int upper, size_t size)
{
int pivot_index;
if (lower < upper)
{
pivot_index = partition(array, lower, upper, size);

quicksort_recusion(array, lower, pivot_index - 1, size);
quicksort_recusion(array, pivot_index + 1, upper, size);
}
}
