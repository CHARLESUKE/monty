#include "monty.h"
/**
  *f_rotl- this main function rotates d
  *stack to d top
  *@headboy: this variable is the stack head
  *@count: this variable is the line_number
  *Return: absolutely no return
 */
void f_rotl(stack_t **headboy,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmpora  = *headboy, *auxilary;

	if (*headboy == NULL || (*headboy)->next == NULL)
	{
		return;
	}
	auxilary = (*headboy)->next;
	auxilary->prev = NULL;
	while (tmpora->next != NULL)
	{
		tmpora = tmpora->next;
	}
	tmpora->next = *headboy;
	(*headboy)->next = NULL;
	(*headboy)->prev = tmpora;
	(*headboy) = auxilary;
}
