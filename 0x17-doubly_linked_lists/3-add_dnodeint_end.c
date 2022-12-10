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
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	new->n = n;
	if (new == NULL)
		return (NULL);
	new->prev = (*head);
	new->next = NULL;
	if ((*head) != NULL)
	{
		(*head)->next = new;
	}
	(*head) = new;

	return (new);
}
