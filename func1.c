#include "monty.h"


/**
 * add_to_stack - Adds a node to the stack.
 * @new_node: Pointer to the new node.
 * @ln: Interger representing the line number of of the opcode.
 */
void add_to_stack(stack_t **new_node, __attribute__((unused))unsigned int ln)
{
	stack_t *tempo;

	if (new_node == NULL || *new_node == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *new_node;
		return;
	}
	tempo = head;
	head = *new_node;
	head->next = tempo;
	tempo->prev = head;
}


/**
 * print_stack - Prints the values of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: line number of  the opcode.
 */
void print_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *tempo;

	(void) line_number;
	if (stack == NULL)
		exit(EXIT_FAILURE);
	tempo = *stack;
	while (tempo != NULL)
	{
		printf("%d\n", tempo->n);
		tempo = tempo->next;
	}
}
