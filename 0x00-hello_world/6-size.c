#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %wu byte(s)\n", sizeof(char));
	printf("Size of an int: %wu byte(s)\n", sizeof(int));
	printf("Size of a long int: %wu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %wu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %wu byte(s)\n", sizeof(float));
	return (0);
}
