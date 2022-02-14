#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 *
 * @list: listint_t list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *now = NULL, *ptr = NULL, *tmp = NULL; 

	if (!list || !(*list) || !(*list)->next)
		return;

	now = (*list)->next;
	while (now != NULL)
	{
		ptr = now;
		now = now->next;
		if (ptr->n < ptr->prev->n)
		{
			tmp = ptr->prev;
			while (tmp != NULL && tmp->n > ptr->n)
			{
				tmp->next = ptr->next;
				if (ptr->next !=  NULL)
					ptr->next->prev = ptr->prev;
				if (tmp->prev == NULL)
				{
					ptr->prev = NULL;
					ptr->next = tmp;
					ptr->next->prev = ptr;
					*list = ptr;
					print_list(*list);
					break;
				}
				else
				{
					tmp->prev->next = ptr;
					ptr->prev = tmp->prev;
					tmp->prev = ptr;
					ptr->next = tmp;
					print_list(*list);
				}
				tmp = tmp->prev->prev;
			}
		}
	}
}
