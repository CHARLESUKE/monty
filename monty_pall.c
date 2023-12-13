#include "monty.h"
/**
 * f_pall - this main function prints the stack
 * @headboy: this varible is the stack head
 * @count: this variable no used
 * Return: absolutely no return
*/
void f_pall(stack_t **headboy, unsigned int count)
{
	stack_t *i;
	(void)count;

	i = *headboy;
	if (i == NULL)
		return;
	while (i)
	{
		printf("%d\n", i->n);
		i = i->next;
	}
}
