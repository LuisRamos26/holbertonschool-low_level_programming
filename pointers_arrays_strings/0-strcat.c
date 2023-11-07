#include"main.h"

/**
 * *_strcat - Concatenate strings
 * @str: An input string
 * @dest: An input string
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
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
		_putchar(dest[len2] != '\0');
		len2++;
	}	
	dest = src[len] + dest[len2];
	return(dest);
}
