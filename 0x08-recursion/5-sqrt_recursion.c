#include "main.h"
int real_sqrt_recursion(int n, int i);
{
	return (real_sqrt_recursion(n, 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root
 * of a number.
 * @n: number to calculate the square root
 * @i: iterator
 * Return: the resulting natural square root
 */
int _sqrt_recursion(int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
