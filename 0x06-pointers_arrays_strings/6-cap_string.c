#include "main.h"

/**
 * cap_string - capitalises chars in a string following a separator
 * 
 * @c: character string pointer
 * Return: char pointer
 */

char *cap_string(char *c)
{
	int i = 0, j,
	    sep[] = {32, '\t', 11,  '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 25};
