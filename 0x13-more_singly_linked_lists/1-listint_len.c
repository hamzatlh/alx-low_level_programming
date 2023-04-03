#include "lists.h"

/**
 * listint_len - the number of elements in a linked list.
 * @h: head
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (i);
}
