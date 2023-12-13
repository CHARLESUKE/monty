#include "monty.h"
/**
* execute - this main function executes the opcode
* @stk: this variable is the head linked list - stack
* @count: this vairable is the line_counter
* @fle: this variable is th poiner to monty file
* @cont: this variable is the line content
* Return: absolutely no return
*/
int execute(char *cont, stack_t **stk, unsigned int count, FILE *fle)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *oppo;

	oppo = strtok(cont, " \n\t");
	if (oppo && oppo[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[j].opcode && oppo)
	{
		if (strcmp(oppo, opst[j].opcode) == 0)
		{	opst[j].f(stk, count);
			return (0);
		}
		j++;
	}
	if (oppo && opst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, oppo);
		fclose(fle);
		free(cont);
		free_stack(*stk);
		exit(EXIT_FAILURE); }
	return (1);
}
