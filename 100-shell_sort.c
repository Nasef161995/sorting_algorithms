#include <stdio.h>
#include "sort.h"

/**
 * shell_sort - function sorts array of integers in ascending order
 *
 * @array: array of integer
 * @size: number of elements
 */
void shell_sort(int *array, size_t size)
{
size_t i, j, gap, a;

gap = 1;
while (gap < size)
gap = (gap * 3) + 1;
gap = (gap - 1) / 3;

while (gap > 0)
{
for (i = 0; i < size; i++)
{
for (j = i; j < size - gap; j += gap)
{
if (array[j] > array[j + gap])
swap(&array[j], &array[j + gap]);
a = j;
while (a >= gap)
{
if (array[a] < array[a - gap])
swap(&array[a], &array[a - gap]);
a -= gap;
}
}
}
gap = (gap - 1) / 3;
print_array(array, size);
}
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
