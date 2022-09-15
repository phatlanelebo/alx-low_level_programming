#include "main.h"
/**
 * jack_bauer - func that prints every minute of the day of Jack Bauet, start1
 * n from 00:00 to 23:59, min loop counts mins, while loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(':');
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		_putchar('\n');
		}
	}
}
