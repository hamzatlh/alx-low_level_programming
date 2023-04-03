#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *Return: 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || *head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
