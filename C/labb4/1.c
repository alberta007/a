#include <stdio.h>

void swap(int *a, int *b)
{
  int tmp = a;
  *a = *b;
  *b = tmp;
}

int main(void)
{
  int x = 7;
  int y = 42;
  swap(&x, &y);
  printf("%d, %d\n", x, y);
  return 0;
}

/*
int main(void) {
  int x = 7;
  int y = 42;
  printf("%d, %d \n", x, y);
  int temp = x;
  x = y;
  y = temp;
  printf("%d, %d \n", x, y);
  return 0;
}
*/
