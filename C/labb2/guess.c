#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"
#include "utils.c"

int main(void)
{
  int guess,numberofguesses = 0;

  srand(time(NULL));
  int randomnum = rand() % 1024;

  int buf_siz = 255;

  char *q;
  char buf[buf_siz];

  q = ask_question_string("What's your name?", buf, buf_siz);
  printf("Guess the number %s! \n",q);

  do {
    guess = ask_question_int("Guess: ");
    if (guess == randomnum) {
      printf("You got it!");
    }
    else if (guess > randomnum) {
      printf("Guess a lower number!\n");
      numberofguesses++;
    }
    else if (guess < randomnum) {
      printf("Guess a bigger number!\n");
      numberofguesses++;
    }

  }
  while (guess != randomnum);
}
