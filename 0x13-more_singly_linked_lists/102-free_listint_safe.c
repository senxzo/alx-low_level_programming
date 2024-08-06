#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the pointer to the head of the list.
 *
 * Return: The number of nodes in the list that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	listint_t *nodes[1024];
	size_t count = 0;
	size_t index;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	current = *h;
	while (current != NULL)
	{
		for (index = 0; index < count; index++)
		{
			if (nodes[index] == current)
			{
				*h = NULL;
				return (count);
			}
		}

		nodes[count++] = current;
		next = current->next;
		free(current);
		current = next;
	}

	*h = NULL;
	return (count);
}
