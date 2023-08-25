#include "monty.h"

/**
 * print_char - Prints the char at the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void print_char(stack_t **stack, unsigned int line_number)
{
	int c;

	if (stack == NULL || *stack == NULL)
		string_err(11, line_number);

	c = (*stack)->n;
	if (c < 0 || c > 127)
		string_err(10, line_number);
	printf("%c\n", c);
}
