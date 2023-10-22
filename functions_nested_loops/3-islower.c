#include "main.h"
/**
 * _islower - Check main.h
 * Description: Funciton checks if the caracter is lowercase
 * Return Result
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
