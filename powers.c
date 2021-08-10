#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int power = 1;
  int i = 0;
  while ( i <= n) {
    printf("2%d\t%d\n", i, power);
    power *= 2;
    i++;
  }
  return 0;
}
