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
	int i;
	int len = 0;
	
	while (src[len] != '\0')
		len++;
	len++;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	dest = dest[len];
	return(dest);
}
