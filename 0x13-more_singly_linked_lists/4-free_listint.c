#include "lists.h"
/**
 * free_listint - Entry Point
 * @head: head
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
