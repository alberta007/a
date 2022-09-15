#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_number(int num) {
  if (num%3 == 0 && (num%5== 0)) {
    printf("Fizz buzz, ");
  }
  else if (num%5== 0){
      printf("fizz, ");
}
  else if (num%3== 0){
      printf("buzz, ");
  }
  else {
    printf("%d, ",num);
}
}

int main(int arg, char *argT[]) {

  char *arg1 = argT[1];
  int a = atoi(arg1);

  for (int i = 1; i <= a; i++){
    print_number(i);
  }
}
