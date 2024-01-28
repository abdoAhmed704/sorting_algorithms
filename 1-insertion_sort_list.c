#include "sort.h"

/**
 * swap_nodes - swap two nodes.
 *
 * @a: first node.
 * @b: second node.
 *
 * Return: (void).
*/
void swap_nodes(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
 * insertion_sort_list - sorting a double linked
 * list using insertion_sort.
 *
 * @list: the list that needs to be sorted.
 *
 * Return: (void)
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (!list || !*list || !(*list)->next)
		return;

	a = (*list)->next;
	while (a)
	{
		b = a;
		a = a->next;
		while (b && b->prev)
		{
			if (b->prev->n > b->n)
			{
				swap_nodes(b->prev, b);
				if (!b->prev)
					*list = b;
				print_list((const listint_t *)*list);
			}
			else
			{
				b = b->prev;
			}
		}

	}
}
