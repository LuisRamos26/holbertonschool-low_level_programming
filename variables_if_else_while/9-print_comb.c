#include <stdio.h>

/* more headers goes there */

/**
* main - Entry point
* Description: 'How to print numbers'
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */

int main(void)
{
	int number;
/* print numbers*/
	for (number = '0'; number <= '9'; number++)
{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
