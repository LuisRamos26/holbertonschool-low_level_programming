#include"main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: Input string
 * @accept : Input accepter characters
 * Return: s
*/

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
	
