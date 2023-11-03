#include"main.h"
#include <stdio.h>

/**
 * _strcpy -  prints n elements of an array of integers.
 * @dest: A char input
 * @src: A char input
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src)
		*dest++ = *src++;
	return (a);
}
