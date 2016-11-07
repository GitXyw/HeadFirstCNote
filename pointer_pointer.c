#include <stdio.h>

int main()
{
    char *names_for_dog[] = {"Bowser", "Bonza", "Snodgrass"};  // array of pointers
    printf("%c", *(*(names_for_dog+2)+2));
    return 0;
}
