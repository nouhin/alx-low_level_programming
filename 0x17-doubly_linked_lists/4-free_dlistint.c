#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of doubly linked list
 * Return: void
 * Description: if the node is NULL, don't print anything
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
