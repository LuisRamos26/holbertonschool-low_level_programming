#include "main.h"
/**
 * _islower - Check main.h
 * @c: is an input character
 * Description: function uses to identify lowercase characters
 * Return: 1 if is lowercase
 */

int _islower(int c)
{
	char i;
	int result = 0;
	/* function*/
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			result = 1;
	}
	return (result);
}
