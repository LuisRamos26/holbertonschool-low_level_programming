#include "main.h"
/**
 * _isalpha - Check main.h
 * @c: is an input character
 * Description: function uses to identify lowercase and uppercase characters
 * Return: 1 if is lowercase/uppercar
 */

int _isalpha(int c)
{
	char i;
	char j;
	int result = 0;
	/* function*/
	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (i == c || j ==  c)
				result = 1;
		}
	}
	return (result);
}
