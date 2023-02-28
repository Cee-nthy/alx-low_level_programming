#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int count = n;

	for (count = n; count > 0; count--)
		_putchar('_');

	_putchar('\n');
}
