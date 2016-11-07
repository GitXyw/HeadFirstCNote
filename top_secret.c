#include <stdio.h>

int main()
{
    freopen("secret.in", "r", stdin);
    freopen("message1.out", "w", stdout);
    freopen("message2.out", "w", stderr);

    char word[10];
    int i = 0;
    while(scanf("%9s", word) == 1){
        i = i + 1;
        if(i % 2)
            fprintf(stdout, "%s\n", word);
        else
            fprintf(stderr, "%s\n", word);
    }
    return 0;
}
