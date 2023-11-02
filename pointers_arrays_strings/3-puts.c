#include"main.h"

/**
 * _strlen - Cheks the lengh of the text
 * @s: An input character
 * Return: Lenth of the text
 */

void _puts(char *str)
{
	int len = 0;
	int i;
	/* count length of char */
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
}
