#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *cournt = *head, *xua;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	xua = (*head)->next;
	xua->prev = NULL;
	while (cournt->next != NULL)
	{
		cournt = cournt->next;
	}
	cournt->next = *head;
	(*head)->next = NULL;
	(*head)->prev = cournt;
	(*head) = xua;
}
