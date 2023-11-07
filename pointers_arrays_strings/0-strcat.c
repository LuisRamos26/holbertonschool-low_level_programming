#include"main.h"

/**
 * *_strcat - Concatenate strings
 * @str: An input string
 * @dest: An input string
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
{
	while (*src) 
		src++;
    /* Copy characters of the second string to the end of the first string */
   	 while (*dest) 
	 {
        	*src = *dest;
       	 	src++;
       	 	dest++;
	 }
    *src = '\0';  /* Terminate the concatenated string */
}
