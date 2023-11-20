#include"main.h"
#include<stdio.h>

/**
 * *_strchr - locates a character in a string.
 * @s: Input string
 * @c : Input character
 * Return: location
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
