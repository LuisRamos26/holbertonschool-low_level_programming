#include"main.h"

/**
 * _puts - Print a string
 * @str: An input string
 * Return: Nothing
 */

void _puts(char *str)
{
	int len = 0;
	/* count length of char */
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
}
