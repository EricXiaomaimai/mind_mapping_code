#include <stdio.h>

#define PI 3.14159265
int main(void)
{
    #ifdef PI

    printf("PI mode is on\n");
    #endif

    #undef PI

    #ifdef PI
    printf("PI mode is on again\n");
    #endif

    return 0;
}    