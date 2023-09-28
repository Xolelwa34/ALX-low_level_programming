#include "main.h"

/**
 * _pow_recursion - It returns x raised to the power of y
 * @x: value number
 * @y: power 
 * Return: results of the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y <= 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
