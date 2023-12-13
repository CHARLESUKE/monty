#include "monty.h"
/**
 * f_queue - this main function prints the top
 * @headboy: this variable is the stack head
 * @count: this variable is the line_number
 * Return: absolutely no return
*/
void f_queue(stack_t **headboy, unsigned int count)
{
	(void)headboy;
	(void)count;
	bus.lifi = 1;
}

/**
 * addqueue - this variable add
 * node to d tail stack
 * @m: this variable is the new_value
 * @headboy: this variable is the head of the stack
 * Return: absolutely no return
*/
void addqueue(stack_t **headboy, int m)
{
	stack_t *new_clot, *auxilary;

	auxilary = *headboy;
	new_clot = malloc(sizeof(stack_t));
	if (new_clot == NULL)
	{
		printf("Error\n");
	}
	new_clot->n = m;
	new_clot->next = NULL;
	if (auxilary)
	{
		while (auxilary->next)
			auxilary = auxilary->next;
	}
	if (!auxilary)
	{
		*headboy = new_clot;
		new_clot->prev = NULL;
	}
	else
	{
		auxilary->next = new_clot;
		new_clot->prev = auxilary;
	}
}
