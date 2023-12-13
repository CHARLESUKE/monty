#include "monty.h"
/**
  *f_rotr- this main function rotates
  *d stack to d bottom
  *@headboy: this variable is the stack head
  *@count: this variable is the line_number
  *Return: absolutely no return
 */
void f_rotr(stack_t **headboy, __attribute__((unused)) unsigned int count)
{
	stack_t *replica;

	replica = *headboy;
	if (*headboy == NULL || (*headboy)->next == NULL)
	{
		return;
	}
	while (replica->next)
	{
		replica = replica->next;
	}
	replica->next = *headboy;
	replica->prev->next = NULL;
	replica->prev = NULL;
	(*headboy)->prev = replica;
	(*headboy) = replica;
}
