#include "arraylist.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("C Implementation of an expandable array a la Java's ArrayList");

    int a = 1;
    int b = 2;

    int result = testing(a, b);    

    printf("%d", result);
    
    return 0;
}


int testing(int a, int b) {
    return a + b;
}
