#include"main.h"

/**
 * _strcat - Concatenate strings
 * @src: An input string
 * @dest: An input string
 * @n: An input value
 * Return: temp
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int i;

	while (*dest)
		dest++;

	for (i = 0; i < n; i++)
		*dest++ = *src++;
	return (temp);
}
