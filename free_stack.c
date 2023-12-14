#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *xua;

	xua = head;
	while (head)
	{
		xua = head->next;
		free(head);
		head = xua;
	}
}
