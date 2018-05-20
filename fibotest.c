#include <stdio.h>

int		fibo()
{
	int x, y, z;
	
	x = 0;
	y = 1;
	z = 0;

	do
	{
		printf("%d \n", x); // -> 0, 1, 1, etc ...

		z = x + y; // -> 0 = 0 + 1  |  1 = 1 + 1  |
		x = y;	// -> 0 = 1  | 1 = 1  |
		y = z; // -> 1 = 1  | 1 = 2

	} while (x < 50);

	return(0);
}

int main(void)
{
	fibo();
	return(0);
}
