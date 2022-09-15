#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int z;
	char c;

	for (z = 0; z < 10; ++z)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
