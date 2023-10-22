#include "main.h"
/**
 * _islower - Check main.h
 * Description: Funciton checks if the caracter is lowercase
 * Return: Result
 */

int _islower(int c)
{
	char i;
	int result;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			result = 1;
		else
			result = 0;
	}
	return (result);
	 
}
