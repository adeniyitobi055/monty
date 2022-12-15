#include "monty.h"

/**
 * addst - changes mode of push to stack
 * @stack: pointer to stack
 * @nline: line number
 *
 * Return: Nothing
 */
void addst(stack_t **stack, unsigned int nline)
{
	(void)stack;
	(void)nline;

	arg.flag = 0;
}

/**
 * addqu - changes the mode of push to queue
 * @stack: pointer to stack
 * @nline: line pointer
 *
 * Return: Nothing
 */
void addqu(stack_t **stack, unsigned int nline)
{
	(void)nline;
	(void)stack;

	arg.flag = 1;
}
