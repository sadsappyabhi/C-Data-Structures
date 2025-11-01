#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "arraylist.h"

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

// Needed a refresher here on using void* and memcppy
// to represent a Generic Data Type
// https://web.stanford.edu/class/archive/cs/cs107/cs107.1258/lectures/8/Lecture8.pdf
void swap(void *a, void *b, size_t nbytes) {
  char temp[nbytes];
  // void *memcpyvoid(*dest, const void *src, size_t n);
  memcpy(temp, a, nbytes);
  memmove(a, b, nbytes);
  memcpy(b, a, nbytes);
}
