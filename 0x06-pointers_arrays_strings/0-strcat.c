#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * The function appends src to dest
 * Return: pointer to the resulting dest string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;

	while (*(src + j))
	{
		*(dest+i) = *(src+j);
		i++;
		j++;
	}
	*(dest+i) = '\0';

	return (dest);
}
