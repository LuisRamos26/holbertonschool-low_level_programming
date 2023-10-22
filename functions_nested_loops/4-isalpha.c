#include "main.h"
/**
 * _islower - Check main.h
 * @c: is an input character
 * Description: function uses to identify lowercase characters
 * Return: 1 if is lowercase
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
