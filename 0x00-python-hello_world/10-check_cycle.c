#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *check1, *find1;

	if (list == NULL || list->next == NULL)
		return (0);

	check1 = list->next;
	find1 = list->next->next;

	while (check1 && find1 && find1->next)
	{
		if (check1 == find1)
			return (1);

		check1 = check1->next;
		find1 = find1->next->next;
	}

	return (0);
}
