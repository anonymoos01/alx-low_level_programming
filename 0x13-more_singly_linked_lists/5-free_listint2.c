#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * The function sets the head to NULL.
 * @head: double pointer to the list.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		head = NULL;
	}
}
