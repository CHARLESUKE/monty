#include "monty.h"
/**
 * f_mul - this main function multiplies
 * d top two elements of d stack.
 * @headboy: this variable is the stack head
 * @count: this variable is the line_number
 * Return: absolutely no return
*/
void f_mul(stack_t **headboy, unsigned int count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headboy);
		exit(EXIT_FAILURE);
	}
	i = *headboy;
	auxilary = i->next->n * i->n;
	i->next->n = auxilary;
	*headboy = i->next;
	free(i);
}
