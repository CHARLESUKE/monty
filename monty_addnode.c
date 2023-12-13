#include "monty.h"
/**
 * addnode - this main function adds node
 * 2 d head stack
 * @headboy: this variable is the head of
 * the stack
 * @m: this variable is thr new_value
 * Return: absolutely no return
*/
void addnode(stack_t **headboy, int m)
{

	stack_t *new_clot, *auxilary;

	auxilary = *headboy;
	new_clot = malloc(sizeof(stack_t));
	if (new_clot == NULL)
	{ printf("Error\n");
		exit(0); }
	if (auxilary)
		auxilary->prev = new_clot;
	new_clot->n = m;
	new_clot->next = *headboy;
	new_clot->prev = NULL;
	*headboy = new_clot;
}
