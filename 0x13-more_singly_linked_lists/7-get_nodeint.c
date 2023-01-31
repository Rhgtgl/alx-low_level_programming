#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in a linked list
 * @head: first node pointer
 * @index: node index
 * Return: pointer otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
