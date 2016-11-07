#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
    size_t len = strlen(s);
    char *t = s + len - 1;
    while(t >= s){
        printf("%c", *t);
        t--;
    }
}

int main()
{
    char s[50];
    fgets(s, 50, stdin);
    print_reverse(s);
    return 0;
}
