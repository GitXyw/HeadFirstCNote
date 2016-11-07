#include <stdio.h>

int main()
{
    freopen("spooky.csv", "r", stdin);

    float longitute, latitute;
    char info[80];
    while(scanf("%f,%f,%79[^\n]", &latitute, &longitute, info) == 3){
        if((latitute > 26) && (latitute < 34)){
            if((longitute > -76) && (longitute < -64)){
                printf("%f,%f,%s\n", latitute, longitute, info);
            }
        }
    }
    return 0;
}
