#include"main.h"

/**
 * rev_string - print a string in reverse.
 * @s: An input string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	int j;
	/* count length of char */
	while (s[len] != '\0')
		len++;
	for (i = 0; i >= (len -1); i++)
		_putchar(s[i]);
	_putchar('\n');
	for (j = (len - 1); j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
