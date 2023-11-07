#include"main.h"

/**
 * _puts - Print a string
 * @str: An input string
 * Return: Nothing
 */

char *_strcat(char *dest, char *src);
{
	int len1 = 0;
	int len2 = 0;
	/* count length of char */
	while (src[len] != '\0')
	{
		_putchar(src[len]);
		len++;
	}
	while (dest[len2] != '\0')
	{
		_putchar(dest[len2]);
		len2++;
	}	
	_putchar('\n');
}
