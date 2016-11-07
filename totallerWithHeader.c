#include <stdio.h>
#include "totallerWithHeader.h"

float total = 0.0;
short count = 0;
short tax_percent = 6;

int main()
{
    float val;
    printf("Price of item: ");
    while(scanf("%f", &val) == 1){
        printf("Total so far: %.2f\n", add_tax(val));
        printf("Price of item: ");
    }
    printf("\nFinal Total: %.2f\n", total);
    printf("Number of items: %hi\n", count);
    return 0;
}

float add_tax(float val)
{
    float tax_rate = 1 + tax_percent / 100.0;
    total = total + (val * tax_rate);
    count = count + 1;
    return total;
}
