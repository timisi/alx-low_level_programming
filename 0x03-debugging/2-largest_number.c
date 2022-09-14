#include "main.h"

/**
 * My largest_number - returns the largest of 3 numbers
 * @x: My first integer
 * @y:  My second integer
 * @z: My third integer
 * Return: My largest number
 */

int largest_number(int x, int y, int z)
{
int largest;
if (x >= y && x >= z)
{
largest = x;
}
else if (y >= x && y >= z)
{
largest = y;
}
else
{
largest = z;
}
return (largest);
}
