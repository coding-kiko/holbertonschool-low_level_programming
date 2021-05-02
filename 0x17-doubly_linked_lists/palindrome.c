#include <stdio.h>

int main()
{
	int a, b, f = 0, c, c1, c2, c3, c4, c5, c6;

	for (a = 999, b = 999; f == 0; b--)
	{
		c = a * b;
		if (c > 99999) /*6cifras*/
		{
			c1 = c / 100000;
			c2 = (c / 10000) % 10;
			c3 = (c / 1000) % 10;
			c4 = (c / 100) % 10;
			c5 = (c / 10) % 10;
			c6 = c % 10;
			if ((c1 == c6) && (c2 == c5) && (c3 == c4))
			{
				printf("%d\n", c);
				f = 1;
			}
		}
		else /*5cifras*/
		{
			c1 = c / 10000;
			c2 = (c / 1000) % 10;
			c3 = (c / 100) % 10;
			c4 = (c / 10) % 10;
			c5 = c % 10;
			if ((c1 == c5) && (c2 == c4))
			{
				printf("%d\n", c);
				f = 1;
			}
		}
	}
	return (0);
}
