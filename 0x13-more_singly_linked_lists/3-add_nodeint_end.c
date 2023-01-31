#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: first node pointer
 * @n: input data
 * Return: pointer otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;
	return (*head);
}
