#include "main.h"
#include <stdio.h>

/**
* The _isupper() checks if the character is uppercase
* @c: character to be checked
* Retun 1 if c is uppercase
*Return o otherwise
*/

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
