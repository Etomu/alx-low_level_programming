#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head to the listint_t structure
 * Return: The number of elements in the listint_t list.
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
