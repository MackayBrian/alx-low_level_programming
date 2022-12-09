#include "lists.h"
/**
 * print_dlistint-prints all the elements of a
 * @h:head of list
 * Return:number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c = 1;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
