#include"main.h"

/**
 * reverse_array - Reverse a strings
 * @a: An input value
 * @n: An input value
 * Return: temp
 */

void reverse_array(int *a, int n)
{
	int alen = 0;
	int i = 0;
	int *temp = a;
	int *start = a;

	while (*a)
	{
		alen++;
		a++;
	}

	if (n > alen)
		n = srclen;

	for (i = 0; i < n; i++)
	{
		*start = *a;
		start++;
		a--;

	}

	return (temp);
}
