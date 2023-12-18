#include "monty.h"
/**
 * f_push -> Must add node to the stack.
 * @head: the stack head.
 * @counter: line count.
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int x;
	int x = 0;
	int flg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			x++;
		for (; bus.arg[x] != '\0'; x++)
		{
			if (bus.arg[x] > 57 || bus.arg[x] < 48)
				flg = 1; }
		if (flg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	x = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, x);
	else
		addqueue(head, x);
}
