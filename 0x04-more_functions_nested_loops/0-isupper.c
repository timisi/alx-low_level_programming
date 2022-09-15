#include "main.h"

/**
*_isupper - This is to check if a  character is uppercase OR not
*@c: Is my character to be tested
*Return: 1 if it is, 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
