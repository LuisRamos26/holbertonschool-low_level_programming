#include <stdio.h>

/* more headers goes there */

/**
* main - Entry point
* Description: 'How to print alphabet'
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */

int main(void)
{
	char alphabet;
/* print alphabet*/
	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
