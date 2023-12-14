#include "monty.h"
/**
  *f_sub- usutration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *xua;
	int usu, nds;

	xua = *head;
	for (nds = 0; xua != NULL; nds++)
		xua = xua->next;
	if (nds < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	xua = *head;
	usu = xua->next->n - xua->n;
	xua->next->n = usu;
	*head = xua->next;
	free(xua);
}
