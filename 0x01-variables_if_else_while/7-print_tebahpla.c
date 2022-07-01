#include <stdio.h>

/**
 *main - prints alphabet reversed
 *Return: Always 0 (Success)
 */

int main(void)
{
char alph = 'z';

while (alph >= 'a')
{
putchar(alph);
alph--;
}
putchar('\n');

return (0);
}
