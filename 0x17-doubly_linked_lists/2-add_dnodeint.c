#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning of a dlistint_t list
 * @head: head of the linked list
 * @n: value of node
 *
 * Return: NULL if fail pointer otherwise
 * Description: if the node is NULL, don't print anything
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
