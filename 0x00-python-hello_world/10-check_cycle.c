#include "lists.h"

/**
 * check_cycle - check for loop in LL
 * @list: head of linked list
 *
 * Description - check for loops in LL
 * Return: 1 if cycled, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *list1, *list2;

	if (!list)
	{
		return (0);
	}
	list1 = list;
	list2 = list->next;
	while (list2 && list1 && list2->next)
	{
		if (list1 == list2)
		{
			return (1);
		}
		list1 = list1->next;
		list2 = list2->next->next;
	}
	return (0);
}
