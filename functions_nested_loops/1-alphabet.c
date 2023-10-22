#include "main.h"

/**
*main - Entry poiint
*Description: 'print alphabet'
*Return: Alwavys 0 (Succes)
*/

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
		
	for (i = 0; i < 26; i++)
		print_alphabet(alphabet[i]);
	_putchar('\n');
	return (0);
}
