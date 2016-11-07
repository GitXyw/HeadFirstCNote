#include <stdio.h>

int main()
{
    int dose[] = {1, 3, 2, 1000};
    printf("%d\n", 3[dose]);    // ½á¹ûÊÇ1000  dose[3] = *(dose + 3) = *(3 + dose) = 3[dose]
    return 0;
}
