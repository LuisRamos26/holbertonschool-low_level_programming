#include <stdio.h>

/* more headers goes there */

/**
* main - Entry point
* Description: 'How to print numbers base 10'
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */

int main(void)
{
	int number;
	char letter;
/* print numbers */
	for (number = '0'; number <= '9'; number++)
		putchar(number);
	for (letter = 'a'; letter <= 'f'; letter++)
	      putchar(letter);	
	putchar('\n');
	return (0);
}
