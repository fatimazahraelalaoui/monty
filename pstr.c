#include "monty.h"

/**
 * print_str - Prints a string starting at the top of the stack
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @ln: Interger representing the line number of of the opcode.
 */
void print_str(stack_t **stack, __attribute__((unused))unsigned int ln)
{
	int c;
	stack_t *tempo;

	if (stack == NULL || *stack == NULL)
	{
		printf("\n");
		return;
	}

	tempo = *stack;
	while (tempo != NULL)
	{
		c = tempo->n;
		if (c <= 0 || c > 127)
			break;
		printf("%c", c);
		tempo = tempo->next;
	}
	printf("\n");
}
