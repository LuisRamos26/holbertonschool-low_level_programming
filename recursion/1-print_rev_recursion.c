#include"main.h"

/**
* _print_rev_recursion - function that prints a string in reverse.
* @s: An input string
*return: Nothing
*/

void _print_rev_recursion(char *s)
{
	while(*s)
		s++;

	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	else
	_putchar('\n');
}
