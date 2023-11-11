#include"main.h"

/**
 * reverse_array - Reverse a strings
 * @a: An input value
 * @n: An input value
 * Return: temp
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux = 0;

	while (i < n)
	{
		n--;
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}

}
