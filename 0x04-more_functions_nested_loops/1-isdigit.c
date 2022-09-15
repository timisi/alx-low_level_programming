#include "main.h"

/**
*_isdigit - This is to check if a character is a digit or not
*@c: Is my testing character
*Return: 1 if it is, 0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= 35) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
