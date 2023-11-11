#include"main.h"

/**
 * *_memcpy -  Copy memory area
 * @dest: Destine adress
 * @src : String to copy
 * @n: Qty of bytes
 * Return: start
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *start = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start);
} 
