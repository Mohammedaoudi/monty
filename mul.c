#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int longur = 0, xua;

	h = *head;
	while (h)
	{
		h = h->next;
		longur++;
	}
	if (longur < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	xua = h->next->n * h->n;
	h->next->n = xua;
	*head = h->next;
	free(h);
}
