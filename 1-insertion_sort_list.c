#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using
 * insertion sort algorithm
 *
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL, *node2 = NULL;

	if (list == NULL)
		return;
	sorted = *list;

	while (sorted != NULL)
	{
		node2 = sorted;
		while (node2->prev != NULL &&
				node2->prev->n > node2->n)
		{
			if (node2->next != NULL)
				node2->next->prev = node2->prev;
			node2->prev->next = node2->next;
			node2->next = node2->prev;
			node2->prev = node2->prev->prev;
			node2->next->prev = node2;
			if (node2->prev != NULL)
				node2->prev->next = node2;
			if (node2->prev == NULL)
				*list = node2;
			print_list(*list);
		}
		sorted = sorted->next;
	}
}
