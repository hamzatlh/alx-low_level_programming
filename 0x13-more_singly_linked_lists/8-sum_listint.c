#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a linked list.
 * @head: first node
 * Return: sum all
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
