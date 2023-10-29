#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a doubly linked list
 * @head: head of doubly linked list
 *
 * Return: sum or 0 if empty
 * Description: if the node is NULL, don't print anything
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
