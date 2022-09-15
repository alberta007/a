#include <stdio.h>

int main(void)
{
  int i;
  int x = 0;
  char str[10000] = "*";
  char ch = '*';
  for(i = 0; i < 10; i++) {
    x = x + i;
    strncat(str, &ch, 1);
    printf("%s\n",str);
  }
  printf("%d",x);
}
