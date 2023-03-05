#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - print characters to std output
 * @c: character to output
 */

int _putchar(char c);

/**
 * _strcat - function to concatenate two strings
 * @src: var to obtain data from
 * @dest: var to append data to
 * Return: pointer to the resulting dest var
 */

char *_strcat(char *dest, char *src);

/**
 * _strcat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n);
