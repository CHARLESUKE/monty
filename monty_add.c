#include "monty.h"
/**
 * f_add - this fuction adds d top 2 eleme
 * of d stack.
 * @headboy: this variable is the stack head
 * @countline: this variable is the line_number
 * Return: absolutely no return
*/
void f_add(stack_t **headboy, unsigned int countline)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", countline);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headboy);
		exit(EXIT_FAILURE);
	}
	i = *headboy;
	auxilary = i->n + i->next->n;
	i->next->n = auxilary;
	*headboy = i->next;
	free(i);
}
