#include <stdio.h>

// Bitfields store a custom number of bits
typedef struct{
	unsigned int low_pass_vcf: 1;     // 0, 1
	unsigned int filter_coupler: 2;   // 0, 1, 2, 3
	unsigned int reverb: 4;           // 0 ~ 2^4-1 (15)
	unsigned int sequential: 1;
} synth;

int main()
{
	return 0;
}
