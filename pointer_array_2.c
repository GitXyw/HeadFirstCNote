#include <stdio.h>

int main()
{
    char s[] = "How big is it?";
    char *t = s;
    printf("%d %d\n", sizeof(s), sizeof(t));     // result: 15 4 ǰ����Ȼ���ݵ�s�ǵ�ַ ��C���ص�������ĳ���
    return 0;
}
