#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14 for 10 times
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
	while (j < 10)
	{
	_putchar(j);
	j++;
	}
	_putchar(i);
	}
	_putchar('\n');
}
