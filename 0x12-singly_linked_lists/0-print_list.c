#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		elements++;
	}
	return (elements);
}
