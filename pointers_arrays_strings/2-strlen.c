#include"main.h"

/**
 * swap_int - Swap values betwen a & b
 * @a: An input value
 * @b: An input value
 * return - nothing
 */

int _strlen(char *s)
{
	int len = 0;
	/* count length of char */	
	while (s[len] != '\0')
		len++;					
	return (len);

}
