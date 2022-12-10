#include "lists.h"
/**
 * print_dlistint-prints all the elements of a
 * @h:head of list
 * Return:number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nelem = 0;
	dlistint_t *tmp = h;

	while (tmp != 0)
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
		nelem++;
	}
	return (nelem);
}
