#include"main.h"

/**
 * print_rev - print a string in reverse.
 * @s: An input string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;
	int i;
	/* count length of char */
	while (s[len] != '\0')
		len++;
	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
