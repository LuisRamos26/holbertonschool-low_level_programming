#include"main.h"

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
			location = s;
		else
			location = NULL;
	}
	return (location);
}
