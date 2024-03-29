#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * @head: the head of the list
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 no
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *temp;
	unsigned int i;

	if (!head || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
	}
	temp = tmp->next;
	tmp->next = temp->next;
	free(temp);
	return (1);
}
