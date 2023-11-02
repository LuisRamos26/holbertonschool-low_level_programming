#include"main.h"

/**
 * swap_int - Swap values betwen a & b
 * @a: An input value
 * @b: An input value
 * @c: It´s for save a value
 * return - nothing
 */

void swap_int(int *a, int *b)
{
	int c = 0;
	/* swap variables */
	c = *a;
	*a = *b;
	*b = c;
}
