#include "main.h"

/**
*main - Entry poiint
*Description: 'print alphabet'
*Return: Alwavys 0 (Succes)
*/

void print_alphabet(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
