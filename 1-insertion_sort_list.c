#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - function sorts array of integers in ascending order
 *
 * @list: list of integer
 */
void insertion_sort_list(listint_t **list)
{
listint_t *temp;/*temp is used in outer loop to traverse the unsorted list*/

/*used in the inner loop for comparing and swapping nodes*/
listint_t *current, *ptr;
if (*list == NULL)
return;

/*outer loop starts from second element*/
temp = (*list)->next;
while (temp)
{
current = temp;
/*inner loop*/
while (current && current->prev && current->prev->n > current->n)
{
ptr = current->prev; /*save the previous node in ptr*/

/* swap nodes*/
current->prev = ptr->prev;
ptr->next = current->next;

if (ptr->prev)
ptr->prev->next = current;

if (current->next)
current->next->prev = ptr;

ptr->prev = current;
current->next = ptr;

if (!current->prev) /*update the head of the list*/
{
*list = current;
}
print_list(*list); /*print list after swap*/
}
temp = temp->next;
}
}
