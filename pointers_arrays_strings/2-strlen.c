#include"main.h"

/**
 * _strlen - Cheks the lengh of the text
 * @s: An input character
 * return - Lenth of the text
 */

int _strlen(char *s)
{
	int len = 0;
	/* count length of char */
	while (s[len] != '\0')
		len++;		
	return (len);

}
