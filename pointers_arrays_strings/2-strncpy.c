#include"main.h"

/**
 * *_strncpy - Concatenate strings
 * @src: An input string
 * @dest: An input string
 * @n: An input value
 * Return: temp
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src < n)
		*dest++ = *src++;
	return (temp);
}
