#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.hcd>
#include "utils.h"

bool is_number(char *str) {
  for (int i = 0; i < strlen(str); i++) {
    if (str[0] == '-' && i == 0) {
      continue;
    }
    if (false == isdigit(str[i])) {
      return false;
    }

  }
  return true;
}

int ask_question_int(char *question)
{

  int result = 0;
  int conversions = 0;
  do
    {
      printf("%s\n", question);
      conversions = scanf("%d", &result);
       int c;
      do
        {
          c = getchar();
        }
      while (c != '\n' && c != EOF);
      putchar('\n');
    }
  while (conversions < 1);
  return result;
}



int read_string(char *buf, int buf_siz){
    int count =0;
    while( count < (buf_siz-1))
        {
             char c = getchar();
         if (c == '\n'){
             buf[count] = '\0';
             return count;
             }
           buf[count] = c;
           count ++;
        }

  buf[count] = '\0';
  return count;

}

char *ask_question_string(char *question, char *buf, int buf_siz)
{
    int c = 0;
   while (c==0)
    {
      printf("%s\n", question);
      c = read_string(buf, buf_siz);
    }

  return buf;

}

int clear_input_buffer(){
      int c;
      do
        {
          c = getchar();
        }
      while (c != '\n' && c != EOF);
}

   /*int main(void)
{
    int buf_siz = 255;
    int read = 0;
    char buf[buf_siz];

   /* puts("Läs in en sträng:");
    read = read_string(buf, buf_siz);
    printf("'%s' (%d tecken)\n", buf, read);

    puts("Läs in en sträng till:");
    read = read_string(buf, buf_siz);
    printf("'%s' (%d tecken)\n", buf, read);
*/
   /*
    char *svar;

  svar = ask_question_string("Första frågan:", buf, buf_siz);
  printf("%s\n", svar);


    return 0;
}
*/
