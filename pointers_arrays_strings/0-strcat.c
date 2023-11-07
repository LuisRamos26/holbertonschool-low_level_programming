#include"main.h"

/**
 * *_strcat - Concatenate strings
 * @str: An input string
 * @dest: An input string
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
