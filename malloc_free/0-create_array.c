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
  char *point;
  int i;

  point = malloc(size * sizeof(char));
  if (point == NULL)
    return(NULL);
  if (size == 0)
    return(NULL);
  for (i=0; i<size ;i++)
    point[i] = c;
  return(point);
}
