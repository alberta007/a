#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_number(char *str) {

  for (int i = 0; i < strlen(str); i++) {
    if (str[0] == '-' && i == 0) {
      continue;
    }
    if (false == isdigit(str[i])) {
      return false;
    }
  }
}

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
  if (argc > 1 && is_number(argv[1]) && is_number(argv[2])) {
    printf("%s and %s is a number\n", argv[1], argv[2]);
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
  } else {
    if (argc > 1) {
      printf("%s or %s is not a number\n", argv[1], argv[2]);
    } else {
      printf("Please provide a command line argument!\n");
    }
  }
}
