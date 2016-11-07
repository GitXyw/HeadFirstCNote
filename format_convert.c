#include <stdio.h>

int main()
{

    freopen("data.out", "w", stdout);

    float longitude;
    float latitude;
    char s[80];
    int ok = 0;
    printf("data=[\n");
    while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, s) == 3){
        if(ok) printf(",\n");
        else ok = 1;
        if((latitude < -90.0) || (latitude > 90.0)){
            fprintf(stderr, "Invalid latitude: %f\n", latitude);
            return 2;
        }
        if((longitude < -180.0) || (longitude > 180.0)){
            fprintf(stderr, "Invalid longitude: %f\n", longitude);
            return 2;
        }
        printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, s);
    }
    printf(",\n]");
    return 0;
}
