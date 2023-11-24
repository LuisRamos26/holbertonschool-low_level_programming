#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a specific char
 * @c: Array of characters 
 * @size: the size of the memory to print
 * Return: A pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
  int *point;

  point = malloc(size);
  if (point == NULL)
    break;
  else if (point == 0)
    return(NULL);
  else
    return(c);
}
