#include <stdio.h>

typedef struct{
	const char *color;
	int gears;
	int height;
} bike;

int main()
{
	bike b = {.height = 17, .gears = 21}; // designated initializer
	printf("Height: %d\nGears: %d\n", b.height, b.gears);
	return 0;
}
