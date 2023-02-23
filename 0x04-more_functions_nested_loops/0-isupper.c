#include "main.h"
/*
 * _isupper - uppercase letters
 * @c: character to check
 * return o 0r 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);
}
