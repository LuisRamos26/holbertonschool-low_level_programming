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
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len = len + 2;	
	}	
	_putchar('\n');
}
