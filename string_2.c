#include <stdio.h>
#include <string.h>

char tracks[] = "international";
void find_str(char s[])
{
    if(strstr(tracks, s)) puts("Found it"); // strstr(s0, s1) ����ҵ����ص��ǵ�ַ �Ҳ���ʱ����0
}

int main()
{
    char s0[20];
    printf("Search for: ");
    fgets(s0, 20, stdin);     // ע������s0�������һ��\n
    find_str(s0);
    return 0;
}
