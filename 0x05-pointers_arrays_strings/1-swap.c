#include "main.h"

/**
*Swap_int - This C program swaps two integers' values
*@a: first integer
*@b: second integer
*Return: returns nothing(0)
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
