#include "main.h"
#include <stdio.h>

/**
 * prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five 
 * print Buzz. For numbers which are multiples of both three and five print FizzBuzz.
 * Return:.
 */


int main(void)
{
	int i;
	/* Print square.*/
	for (i = 1; i = 100; i++)
	{
		if (i % 3 == 0 &&  % 5 == 0)
			printf("FizzBuzz");
		
		else if (i % 5 == 0) 
			printf("Buzz");
		
		else if (i % 3 == 0)
			printf("Fizz");

		else
			printf("%d",i);
	}
	printf("\n");
}