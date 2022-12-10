#include "lists.h"
/**
 * print_dlistint-prints all the elements of a
 * @h:head of list
 * Return:number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nelem;

	while (h != 0)
	{
		printf("%d", h->n);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
