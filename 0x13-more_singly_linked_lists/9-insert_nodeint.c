#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the head of the list.
 * @idx: index where the new node should be added, starting at 0.
 * @n: integer to be added to the new node.
 *
 * Return: the address of the new node, or NULL if it failed or index is invalid.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	/* Create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Insert at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the position before the index */
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}

	/* Check if the position is valid */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
