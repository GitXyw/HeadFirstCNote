#include <stdio.h>

int main()
{
    int nums[] = {1, 2, 3};
    printf("nums is at %p\n", nums);
    printf("nums + 1 is at %p\n", nums + 1);  // int�� ָ���1 ʵ�ʵ�ַ��4
    return 0;
}
