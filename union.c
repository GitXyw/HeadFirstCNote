#include <stdio.h>

//the way of creating a variable that supports several different data types
typedef union(){
	int count;
	float weight;
	float volume;
} quantity;


int main()
{
	// how to use a union
	quantity q1 = {4};    // This means the quantity is a count of 4
	quantity q2 = {.weight = 1.5};  // This will set the union for a floating-point weight value
	quantity q3;
	q3.volume = 3.7;
	//  there will be only one piece of data stored.

	return 0;
}
