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
	int srclen = 0;
	int i = 0;
	char *temp = dest;
	char *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
