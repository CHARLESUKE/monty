#include "monty.h"
/**
 * f_swap - this functions job adds the
 * top 2 elemen of d stack.
 * @headboy: this variable is the stack head
 * @count: this variable is the line_number
 * Return: absolutely no return
*/
void f_swap(stack_t **headboy, unsigned int count)
{
	stack_t *i;
	int length = 0, auxilary;

	i = *headboy;
	while (i)
	{
		i = i->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headboy);
		exit(EXIT_FAILURE);
	}
	i = *headboy;
	auxilary = i->n;
	i->n = i->next->n;
	i->next->n = auxilary;
}
