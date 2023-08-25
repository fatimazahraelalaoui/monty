#include "monty.h"

/**
 * pop_top - Removes the top node of  the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void pop_top(stack_t **stack, unsigned int line_number)
{
	stack_t *tempo;

	if (stack == NULL || *stack == NULL)
		more_err(7, line_number);

	tempo = *stack;
	*stack = tempo->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tempo);
}
