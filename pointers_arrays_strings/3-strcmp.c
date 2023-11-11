#include"main.h"

/**
 * *_strcmp - Compare two strings
 * @s1: An input string
 * @s2: An input string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
	}
		
	return (0);
}
