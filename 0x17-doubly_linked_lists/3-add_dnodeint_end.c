#include "lists.h"
/**
 * add_dnodeint_end-adds a new node at end
 * at the beginning of dlist
 * @head:first n-ode
 * @n:element to be added
 * Return:address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (0);
	}
	while (temp != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;

	return (new);
}
