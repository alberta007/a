#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void print_number(int num) {
  if ((num % 3 == 0) && (num % 5 == 0)) {
    printf("fizzbuzz");
  }
  else if (num % 3 == 0) {
    printf("fizz ");
  }
  else if(num % 5 == 0) {
    printf("buzz ");
  }
  else {
    printf("%d ",num);
  }
}

void main (int arg, char *argT[])
{
char *arg1 = argT[1];
int a = atoi(arg1);

  for (int i = 1; i <=a;i++ ) {
    print_number(i);
  }
}
