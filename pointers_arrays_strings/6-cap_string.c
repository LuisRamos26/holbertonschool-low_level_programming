#include"main.h"

/**
 * *string_toupper -Change lowercase to uppercase
 * @str: An input character
 * Return: start
 */

char *string_toupper(char *str)
{
	char *start = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (start);

}
