#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("hello world\n");
    createFile();

    #ifdef MACRO
        printf("hello world\n");
    #endif
    return 0;
}