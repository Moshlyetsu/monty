#include "monty.h"

/**
 * f_pall -> Must print the stack.
 * @head: the stack head.
 * @counter: the number used.
 * Return: no return.
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
