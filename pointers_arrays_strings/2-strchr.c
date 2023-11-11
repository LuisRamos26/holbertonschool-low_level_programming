#include"main.h"
#include<std.io>

/**
 * *_strchr - locates a character in a string.
 * @s: Input string
 * @c : Input character
 * Return: location
 */

char *_strchr(char *s, char c)
{
	char *location;

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (NULL);
}
