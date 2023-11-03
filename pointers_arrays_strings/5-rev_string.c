#include"main.h"

/**
 * rev_string - print a string in reverse.
 * @s: An input string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char a;
	/* count length of char */
	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		a = s[i];
		s[i++] = s[len];
		s[len] = a;
	}
		
}
