#include "monty.h"
/**
* free_stack - this main function is the
* frees a doubly linked list
* @headboy: this variable is the head of the stack
*/
void free_stack(stack_t *headboy)
{
	stack_t *auxilary;

	auxilary = headboy;
	while (headboy)
	{
		auxilary = headboy->next;
		free(headboy);
		headboy = auxilary;
	}
}
