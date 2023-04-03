#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the head of the list
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
