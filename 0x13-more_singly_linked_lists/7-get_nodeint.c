#include "lists.h"
/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: the first node
 * @index: the index of the node
 * Return: pointer of Index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	i = 0;
	while (i < index)
	{
		head = head->next;
		if (!head)
			return (NULL);
		i++;
	}
	return (head);
}
~
