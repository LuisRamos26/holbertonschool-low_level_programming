#include"main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: Input string
 * @accept : Input accepter characters
 * Return: s
*/

unsigned int _strspn(char *s, char *accept)
{
	int match = 0;
	char *start = accept;
	/*accepted*/
	while (*s)
	{
		accept = start;
		while (*accept)
		{
			if (*accept == *s)
			{
				match++;
			}
			accept++;
		}
	}
		s++;
	return (match);
}
	
