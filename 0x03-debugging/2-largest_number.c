#include "main.h"

/**
 * My largest_number - returns the largest of 3 numbers
 * @x: My first integer
 * @y:  My second integer
 * @z: My third integer
 * Return: My largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
