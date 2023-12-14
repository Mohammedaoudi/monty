#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *nouv_nd, *xua;

	xua = *head;
	nouv_nd = malloc(sizeof(stack_t));
	if (nouv_nd == NULL)
	{
		printf("Error\n");
	}
	nouv_nd->n = n;
	nouv_nd->next = NULL;
	if (xua)
	{
		while (xua->next)
			xua = xua->next;
	}
	if (!xua)
	{
		*head = nouv_nd;
		nouv_nd->prev = NULL;
	}
	else
	{
		xua->next = nouv_nd;
		nouv_nd->prev = xua;
	}
}
