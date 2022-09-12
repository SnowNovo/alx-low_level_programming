#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, a, g;

	d = 48;
	a = 48;
	g = 48;
	while (a < 58)
	{
		d = 48;
		while (d < 58)
		{
			g = 48;
			while (g < 58)
			{
				if (a != d && a != g && d != g && a < d && d < g)
				{
					putchar(a);
					putchar(d);
					putchar(g);
					if (!(d == 56 && a == 55 && g == 57))
					{
					putchar(',');
					putchar(' ');
					}
				}
				g++;
			}
			d++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
