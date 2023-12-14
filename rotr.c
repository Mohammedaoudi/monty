#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cpi;

	cpi = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpi->next)
	{
		cpi = cpi->next;
	}
	cpi->next = *head;
	cpi->prev->next = NULL;
	cpi->prev = NULL;
	(*head)->prev = cpi;
	(*head) = cpi;
}
