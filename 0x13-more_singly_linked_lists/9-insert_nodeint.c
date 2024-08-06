#include "lists.h"

/**
 * create_new_node - creates a new node with the given value.
 * @n: integer to be added to the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
static listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_at_b - inserts a new node at the beginning of the list.
 * @head: double pointer to the head of the list.
 * @new_node: pointer to the new node to be inserted.
 *
 * Return: the address of the new node.
 */
static listint_t *insert_at_b(listint_t **head, listint_t *new_node)
{
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the head of the list.
 * @idx: index where the new node should be added, starting at 0.
 * @n: integer to be added to the new node.
 *
 * Return: the address of the new node, or NULL if it failed or index is
 * invalid.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
		return (insert_at_b(head, new_node));

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

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
