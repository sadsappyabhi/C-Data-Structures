#include "arraylist.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * Type-agnostic implementation of swap() using a temporary variable.
 *
 * https://web.stanford.edu/class/archive/cs/cs107/cs107.1258/lectures/8/Lecture8.pdf
 *
 * @param[in] a, b The two variables to swap data
 * @param[in] nbytes The number of bytes required to store the data
 */
void swap(void *a, void *b, size_t nbytes) {
  char temp[nbytes];
  // void *memcpyvoid(*dest, const void *src, size_t n);
  memcpy(temp,a, nbytes);
  memmove(a, b, nbytes);
  memcpy(b, a, nbytes);
}

int main(int argc, char *argv[]) {
  printf("\nC Implementation of an expandable array a la Java's ArrayList");
  printf("\n=============================================================\n");

  printf("\nTests of 'swap' helper function:");
  printf("\n================================\n");

  int a = 4;
  int b = 3;

  printf("Integer 'A': %d\n", a);
  printf("Integer 'B': %d\n", b);

  swap(&a, &b, sizeof(a));

  printf("Integer 'A' expected value after swap: 3\n");
  printf("Integer 'B' expected value after swap: 4\n");
  printf("Integer 'A' actual value after swap: %d\n", a);
  printf("Integer 'B' actual value after swap: %d\n", b);
  






    
    return 0;
}
