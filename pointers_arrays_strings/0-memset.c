#include"main.h"

/**
 * *_memset -  fills memory with a constant byte
 * @s: Pointer adress
 * @b: Constant byte
 * @n: Qty of bytes
 * Return: start
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *start = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (start);
}
