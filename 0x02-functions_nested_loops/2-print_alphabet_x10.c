#include "main.h"
/**
* print_alphabet_x10 prints 10 times the alphabet
*/

void print_aphabet_x10(void)
{
	char alph, n;
	n = 0;
	while (n < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
		_putchar(alph);
		}
		n++;
		_putchar('\n');
	}
}
