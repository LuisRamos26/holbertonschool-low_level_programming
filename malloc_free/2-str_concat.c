#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - concatenates two strings.
 * @s1: input string
 * @s2: input string
 * Return: newly allocated space in memory which contains the
 * concatenated strings.
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int s1len = 0;
	int s2len = 0;
	int i = 0;
	char *temp = s2;
	char *start = s1;
	/**/

	if (s1 == NULL )
		return (NULL);
	while (*s1)
	{
		s1len++;
		s1++;
	}
	s1len++;
	s1 = start;
	while (*s2)
	{
		s2len++;
		s2++;
	}
	s2 = temp;
	
	s = malloc((s1 + s2) * sizeof(char) + 1);
	if (s != NULL)
	{
		while (i < (s1 + s2))
		{
			*dest++ = *src++;
			i++;
		}
		return (s);
	}
	else
		return (NULL);
}
