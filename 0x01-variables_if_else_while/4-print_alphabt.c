#include <stdio.h>
/**
 * main - prints alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)

{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
	if (alph == 'q')
	continue;

	else if (alph == 'e')
	continue;

	putchar(alph);
	}

	putchar('\n');

	return (0);

}

