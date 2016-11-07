#include <stdio.h>

int main()
{
    int nums[] = {1, 2, 3};
    printf("nums is at %p\n", nums);
    printf("nums + 1 is at %p\n", nums + 1);  // int型 指针加1 实际地址加4
    return 0;
}
