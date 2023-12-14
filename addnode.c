#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *nv_nds, *xua;

	xua = *head;
	nv_nds = malloc(sizeof(stack_t));
	if (nv_nds == NULL)
	{ printf("Error\n");
		exit(0); }
	if (xua)
		xua->prev = nv_nds;
	nv_nds->n = n;
	nv_nds->next = *head;
	nv_nds->prev = NULL;
	*head = nv_nds;
}
