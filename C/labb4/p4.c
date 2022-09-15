#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print(char *str) {
  for (;*str != '\0'; str++) {
    putchar(*str);
  }
}


int main(void)
{
      char *c = "hej pa dig";
      print(c);
  return 0;
}
