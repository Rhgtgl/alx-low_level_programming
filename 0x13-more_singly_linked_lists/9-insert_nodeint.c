#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts at a new node
 * @head: The head node
 * @idx: The index
 * @n: The integer data
 *
 * Return: The address otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	size_t i = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head && !idx)
	{
		*head = node;
		return (node);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
		node->next = temp;
		*head = node;
		return (node);
	}

	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	node->next = temp->next;
	temp->next = node;

	return (node);
}
