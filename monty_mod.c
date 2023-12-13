#include "monty.h"
/**
 * f_mod - this function computes the
 * rest of d division of d second top element
 * of d stack by d top element of d stack
 * @headboy: this variable is the stack head
 * @count: this vairable is the line_number
 * Return: absolutely no return
*/
void f_mod(stack_t **headboy, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headboy);
		exit(EXIT_FAILURE);
	}
	i = *headboy;
	if (i->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headboy);
		exit(EXIT_FAILURE);
	}
	auxilary = i->next->n % i->n;
	i->next->n = auxilary;
	*headboy = i->next;
	free(i);
}
