#include<stdio.h>
main()
{
	int x = 10, y = 5;
	//swap x and y
	x = x + y; // x = 10 + 5 = 15
	y = x - y; // y = 15 - 5 = 10 = x
	x = x - y; // x = 15 - 10 = 5 = y
	printf("After swapping: x = %d, y = %d", x, y);
}
