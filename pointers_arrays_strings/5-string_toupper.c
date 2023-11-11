#include"main.h"

/**
 * *string_toupper -Change lowercase to uppercase
 * @a: An input value
 * Return: 0
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);

}
