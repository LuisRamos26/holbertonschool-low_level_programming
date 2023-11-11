#include"main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: An input string to capitalize letters
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };

	while (s[i])
	{
		if (s[0] >= 'a' && s[0] <= 'z'))
				s[i] -= 32;
		for (; i < 13; i++)
		{
			if (s[i] == seperators[i] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				s[i + 1] -= 32;		
		}
		i++;
	}
	return (s);
}
