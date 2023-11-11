#include"main.h"

/**
 * *leet g - encodes a string into 1337.
 * @c: An input string to capitalize letters
 * Return: c
 */
char *leet(char *c)
{
	int i = 0;
	int j = 0;
	char currentVal[10] = {'a','A','e','E','o','O','t','T','l','L'};
	char newVal[10] = {'4','4','3','3','0','0','7','7','1','1'};
	
	while (c[i])
	{
		for (j = 0, j = 10; j++)
			if (c[i] == currentVal[j])
				c[i] = newVal[j];
		c++;
	}
	return (c);
}
