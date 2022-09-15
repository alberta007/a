#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char *string_t;
typedef unsigned int age_t;
typedef int(*int_fold_func)(int, int);

int string_length(char *string) {
  int i = 0;

  while (string[i] != '\0') {
    i++;
  }
  return i;
}

int * print(char *printz) {
  int i = 0;
  char *priint;
  while (printz[i] != '\0') {
    putchar(priint[i]);
    i++;
  }
  return priint;
}

/*
int fib(int tal) {
  if (tal == 0 || tal == 1) {
    tal = tal + 1;
    fib(tal);
  }
  else {
    tal = (fib(tal -1)) + (fib(tal - 2));
    return tal;
  }
  }
*/
////

int foldl_int_int(int numbers[], int numbers_siz, int_fold_func f)
{
  int result = 0;

  // Loopa över arrayen och för varje element e utför result = f(result, e)
  for (int i = 0; i < numbers_siz; ++i)
  {
    result = f(result, numbers[i]);
  }

  return result;
}




int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    printf("Usage: %s words or string", argv[0]);
  }
  else
  {
    for (int i = 1; i < argc; ++i)
    {
      int expected = strlen(argv[i]);
      int actual   = string_length(argv[i]);
      printf("strlen(\"%s\")=%d\t\tstring_length(\"%s\")=%d\n",
             argv[i], expected, argv[i], actual);
    }

  }
  return 0;
}
