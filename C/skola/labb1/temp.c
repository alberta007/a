#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
bool is_number(char *str)
{
  for (int i = 0; i < strlen(str); i++) {
    if (str[0] == '-' && i == 0) {
      continue;
    }
    if (isdigit(str[i]) == false){
      return false;
    }
  }
  return true;
}

int main(int argc, char *argv[]) {
  if (argc > 1 && is_number(argv[1]))
{
  printf("%s is a number\n", argv[1]);
}
else
{
  if (argc > 1)
  {
    printf("%s is not a number\n", argv[1]);
  }
  else
  {
    printf("Please provide a command line argument!\n");
  }
}
}
