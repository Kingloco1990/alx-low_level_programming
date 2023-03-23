#include "lists.h"

void print_before(void)__attribute__((constructor));

/**
 * print_before - Prints a string before the main fucntion
 *                is executed.
 *
 * Return: Nothing.
 */
void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
