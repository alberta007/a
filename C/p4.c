#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x = 0;

  char *arg1 = argv[1];
  int a = atoi(arg1);

  char *arg2 = argv[2];
  int b = atoi(arg2);

  int c = b;
  if (argc != 3) {
    puts("Fel antal argument!");
  }
  for(int i = 0; i < a; i++) {
  x = x + i;
  printf("\n");
  for (int st = 0; st < c; ++st)
  {
      printf("*");
  }
}
  printf("\n%d",x);
  return 0;
}
