#include"main.h"

/**
* _puts_recursion - prints a string, followed by a new line.
* @s: An input string
*return: Nothing
*/

void _puts_recursion(char *s)
{
	int slen = 0;

	while(*s)
	{
		slen++;
		s++;
	}
	s = slen;
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s - 1);
	}
	else
	_putchar('\n');
}
