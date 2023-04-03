#include "lists.h"
/**
  * add_nodeint - add node at beginning of a list.
  * @head: head
  * @n: add the list
  * Return: ptr
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (!head)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
