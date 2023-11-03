#include"main.h"

/**
 * puts2 -  prints every other character of a string.
 * @str: An input string
 * Return: Nothing
 */

void puts2(char *str)
{
	int len = 0;
	int i;
	/* count length of char */
	while (s[len] != '\0')
		len++;
	for (i = 0; i >= (len -1); i + 2)
		_putchar(s[i]);
	_putchar('\n');
}
