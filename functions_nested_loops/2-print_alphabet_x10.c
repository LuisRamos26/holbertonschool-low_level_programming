#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: prints the alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void);
{
	int i;
	char j;
	/* function*/
	for (i = 1; i <= 10; i++)
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
	_putchar('\n');
}
