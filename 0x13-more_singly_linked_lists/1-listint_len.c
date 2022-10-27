#include "lists.h"
/**
 * listint_len-returns the number of elements in a linked listint_t list
 * @h: list head
 * Return:number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
