#include "monty.h"

/**
 * f_swap -> Must add the top two elements of the stack.
 * @head: the stack head.
 * @counter: line counter.
 * Return: no return.
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int lgnth = 0;
	int aux;

	hd = *head;
	while (h)
	{
		hd = hd->next;
		lgnth++;
	}
	if (lgnth < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	aux = hd->n;
	hd->n = hd->next->n;
	hd->next->n = aux;
}
