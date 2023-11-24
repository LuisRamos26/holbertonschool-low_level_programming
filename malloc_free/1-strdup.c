#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly 
 * allocated space in memory, 
 * which contains a copy of the string given as a parameter.
 * @str: input string
 * Return: A pointer to the duplicated string, 
 * or NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *s;
	int size = 0;
	int i = 0;
	char *start = str;
	
	while (*str)
	{
		str++;
		size++;
	}
	str = start;
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
