#include <stdio.h>

int main()
{
    char s[] = "How big is it?";
    char *t = s;
    printf("%d %d\n", sizeof(s), sizeof(t));     // result: 15 4 前者虽然传递的s是地址 但C返回的是数组的长度
    return 0;
}
