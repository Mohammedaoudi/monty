#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int longr = 0, xua;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		longr++;
	}
	if (longr < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	xua = hd->n + hd->next->n;
	hd->next->n = xua;
	*head = hd->next;
	free(hd);
}
