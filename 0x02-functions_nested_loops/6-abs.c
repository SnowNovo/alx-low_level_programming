#include "main.h"

/**
 * _abs - computes the absolute value ofan integer
 * @n: integer whose absolute value we want to find
 *
 * Return: int
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
