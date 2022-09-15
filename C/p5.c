#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  char *arg1 = argv[1];
  int a = atoi(arg1);

  char *arg2 = argv[2];
  int b = atoi(arg2);

  int i, gcd;
  bool skrr = true;

  if (a > b) {
    i = b;
  } else if (a < b) {
    i = a;
  } else if (a == b) {
    gcd = a;
    skrr = false;
  }
  while (skrr == true) {
    if ((a % i == 0) && (b % i == 0)) {
      gcd = i;
      skrr = false;
    } else {
      i--;
    }
  }
  printf("%d \n", gcd);
  return 0;
}
