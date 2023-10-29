#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head of doubly linked list
 * @index: index of the node to get
 *
 * Return: pointer to the indexed node, or NULL on failure
 * Description: if the node is NULL, don't print anything
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
