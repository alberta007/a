#include <stdio.h>

int main(void)
{
  int st;
  int i;
  int x = 0;
  char *ch = "*";

  for(i = 0; i < 10; i++) {
    x = x + i;
    printf("\n");
    for (st = 0; st < i; ++st)
    {
        printf("%s",ch);
    }
  }
  printf("\n%d",x);
}
