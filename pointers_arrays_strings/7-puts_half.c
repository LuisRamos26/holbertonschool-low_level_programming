#include"main.h"

/**
 * puts_half -  prints half of a string.
 * @str: An input string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len = 0;
	int i;
	int newLen = 0;
	/* prints half of a string*/
	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		newLen = len / 2;
		for (i = newLen; i < len; i++)
		       _putchar(str[i]);	
	}
	else
	{
		newLen = len / 2;
		for (i = newLen; i < len; i++)  
			_putchar(str[i]);
	}
	_putchar('\n');
}
