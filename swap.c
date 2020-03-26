#include <stdio.h>

int main(void)
{
	int x = 28;
	int y = 50;

	printf("x is %i\n");
	printf("y is %i\n");

	// swapping...
	int temp = x;
	x = y;
	y = temp;
	
	printf("x is now %i\n");
	printf("y is now %i\n");

	return 0;
}
