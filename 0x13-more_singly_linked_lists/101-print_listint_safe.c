#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    const listint_t *nodes[1024]; /* Array to keep track of visited nodes */
    size_t count = 0;
    size_t index = 0;

    if (head == NULL)
    {
        exit(98);
    }

    while (current != NULL)
    {
        /* Check if the current node has been visited */
        for (index = 0; index < count; index++)
        {
            if (nodes[index] == current)
            {
                printf("-> [%p] %d\n", (void *)current, current->n);
                return (count);
            }
        }

        /* Print the current node */
        printf("[%p] %d\n", (void *)current, current->n);

        /* Add the current node to the visited nodes array */
        if (count < 1024)
        {
            nodes[count++] = current;
        }

        /* Move to the next node */
        current = current->next;
    }

    return (count);
}
