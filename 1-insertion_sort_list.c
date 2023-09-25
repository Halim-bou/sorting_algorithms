#include "sort.h"
#include <stddef.h>

/**
 * insertion_sort_list - using insertion sorting algorithm to
 * doubly linked list
 * @list: a pointer to pointer to the doubly linked list
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *sorted, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (curr = (*list)->next; curr != NULL; curr = tmp)
	{
		tmp = curr->next;
		sorted = curr->prev;
		while (sorted != NULL && curr->n < sorted->n)
		{
			sorted->next = curr->next;
			if (curr->next != NULL)
				curr->next->prev = sorted;
			curr->prev = sorted->prev;
			curr->next = sorted;
			if (sorted->prev != NULL)
				sorted->prev->next = curr;
			else
				*list = curr;
			sorted->prev = curr;
			sorted = curr->prev;

			print_list((const listint_t *)*list);
		}
	}
}
