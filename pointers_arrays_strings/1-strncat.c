#include"main.h"

/**
 * *_strncat - Concatenate strings
 * @src: An input string
 * @dest: An input string
 * @n: An input value
 * Return: temp
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0;
	int i;
	char *temp = dest;
	char *start = src;

	while (*src)
	{
		srclen++; /*Conteo para la longitud de src*/
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		/*Sí el conteo de src es mayor que n, entonces n cambia su valor*/
		n = srclen;

	src = start; /*Vuelve el apuntador al incio de src*/

	for (i = 0; i < n; i++)
		*dest++ = *src++; /*Concatena src a dest*/

	*dest = '\0';
	return (temp);
}
