#include "main.h"

/**
 * swap_int - swaps the values pointed to by arguements
 *
 * @a: pointer arguement 1
 * @b: pointer arguement 2
 */
void swap_int(int *a, int*b)
{
	int con = *a;

	*a = *b;
	*b = con;
}
