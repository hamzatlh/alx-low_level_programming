#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: a double pointer of lists
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
