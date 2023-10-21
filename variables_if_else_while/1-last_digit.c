#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/* more headers goes there */
/**
 * main - Entry point
 * Description: 'Positive or negative'
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last;
	/* identify numbers */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf( "Last digit of %d is ", n);
	last = strlen (n);
	if (last > 5)
		printf("%d and is greater than 5\n", last);
	else if (n == 0)
		printf("%d and is 0\n", last);
	else
		printf("%d and is less than 6 and not 0\n", last);
	return (0);
}
