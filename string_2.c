#include <stdio.h>
#include <string.h>

char tracks[] = "international";
void find_str(char s[])
{
    if(strstr(tracks, s)) puts("Found it"); // strstr(s0, s1) 如果找到返回的是地址 找不到时返回0
}

int main()
{
    char s0[20];
    printf("Search for: ");
    fgets(s0, 20, stdin);     // 注意这里s0最后会包含一个\n
    find_str(s0);
    return 0;
}
