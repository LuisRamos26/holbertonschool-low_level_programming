#include "main.h"
/**
 *main - Entry poiint
 *Description: 'pint text'
 *Return: Alwavys 0 (Succes)
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(text[i]);
	_putchar('\n');
	return (0);
}
