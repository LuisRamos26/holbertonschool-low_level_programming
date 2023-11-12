#include"main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: Input string
 * @accept : Input accepter characters
 * Return: s
*/

unsigned int _strspn(char *s, char *accept)
{
	int accepted = 0;
	int i;
	int alen = 0;
	char *start = accept;
	while (*accept)
	{
		alen++;
		accept++;
	}
	while (*s)
	{
		accept = start;
		for (i = 0; i <= alen; i++)
		{
			if (*accept == *s)
			{
				accepted++;
			}
			accept++;
		}
		s++;
	}
	return (accepted);
}
