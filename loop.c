#include <stdio.h>

#define TIMES 3

int main(void) {
  int i = 1;
  while (i <= TIMES) {
    printf("%d° vuelta\n", i );
    i = i + 1;
  }
  return 0;
}
