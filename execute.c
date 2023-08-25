#include "monty.h"

/**
 * err - Prints appropiate error messages determined by their error code.
 * @error_code: The error codes
 */
void err(int error_code, ...)
{
	va_list argument;
	char *opperation;
	int linen;

	va_start(argument, error_code);
	switch (error_code)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n",
				va_arg(argument, char *));
			break;
		case 3:
			linen = va_arg(argument, int);
			opperation = va_arg(argument, char *);
			fprintf(stderr, "L%d: unknown instruction %s\n", linen, opperation);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%d: usage: push integer\n", va_arg(argument, int));
			break;
		default:
			break;
	}
	free_nodes();
	exit(EXIT_FAILURE);
}

/**
 * more_err - handles errors.
 * @error_code: The error codes 
 */
void more_err(int error_code, ...)
{
	va_list argument;
	char *opperation;
	int linen;

	va_start(argument, error_code);
	switch (error_code)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n",
				va_arg(argument, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n",
				va_arg(argument, int));
			break;
		case 8:
			linen = va_arg(argument, unsigned int);
			opperation = va_arg(argument, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", linen, opperation);
			break;
		case 9:
			fprintf(stderr, "L%d: division by zero\n",
				va_arg(argument, unsigned int));
			break;
		default:
			break;
	}
	free_nodes();
	exit(EXIT_FAILURE);
}

/**
 * string_err - handles errors.
 * @error_code: The error codes
 */
void string_err(int error_code, ...)
{
	va_list argument;
	int linen;

	va_start(argument, error_code);
	linen = va_arg(argument, int);
	switch (error_code)
	{
		case 10:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", linen);
			break;
		case 11:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", linen);
			break;
		default:
			break;
	}
	free_nodes();
	exit(EXIT_FAILURE);
}
