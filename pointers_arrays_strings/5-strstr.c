#include"main.h"
#include<stdio.h>

/**
 * *_strstr - locates a substring.
 * @haystack: An input string
 * @needle: An input string to find it.
 * Return: a pointer to the beginning of the located substrin
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *starth = haystack;
	char *startn = needle;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			haystack = starth;
		return (haystack);
		
	}
	return (NULL);
}
