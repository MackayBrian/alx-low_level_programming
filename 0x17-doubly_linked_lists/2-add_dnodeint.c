#include "lists.h"
/**
 * add_dnodeint- adds a new node
 * at the beginning of dlist
 * @head:first n-ode
 * @n:element to be added
 * Return:address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (new == NULL)
		return (NULL);
	new->next = (*head);
	new->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new;
	(*head) = new;

	return (*new);
}
