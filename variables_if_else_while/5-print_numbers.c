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
/* print numbers */
	for (number = 0; number <= 9; number++)
		printf ("%d", number);
	printf ("\n");
	return (0);
}
