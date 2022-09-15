#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "utils.h"
#include <stdlib.h>

bool not_empty(char *str)
{
  return strlen(str) > 0;
}

bool is_number(char *str) {
  for (int i = 0; i < strlen(str); i++) {
    if (str[0] == '-' && i == 0) {
      continue;
    }
    if (isdigit(str[i])==false) {
      return false;
    }
  }
  return true;
}

bool is_shelf(char *str) {
  for (int i = 1; i < strlen(str); i++) {
    if (isdigit(str[i])==false) {
      return false;
    }
  }
  return true;
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



answer_t ask_question(char *question, check_func check, convert_func convert)
{
   int buf_siz = 255;
   char buf[buf_siz];
   bool right_type = false;

while (right_type != true)
  {

      printf("%s\n", question);
      read_string(buf, buf_siz);
      right_type = check (buf);

  }

  answer_t answer = convert (buf);
  return answer;
}

char *ask_question_shelf(char *question)
{
  return ask_question(question, is_shelf, (convert_func*) strdup).string_value;
}

char *ask_question_string(char *question)
{
  return ask_question(question, not_empty, (convert_func*) strdup).string_value;
}

int ask_question_int(char *question)
{
  answer_t answer = ask_question(question, is_number, (convert_func*) atoi);
  return answer.int_value;
}

/*
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

int main(void)
{
    int buf_siz = 255;
    char buf[buf_siz];

  puts("Läs in en sträng:");
    read = read_string(buf, buf_siz);
    printf("'%s' (%d tecken)\n", buf, read);

    puts("Läs in en sträng till:");
    read = read_string(buf, buf_siz);
    printf("'%s' (%d tecken)\n", buf, read);

  char *svar;

  svar = ask_question_string("Första frågan:", buf, buf_siz);
  printf("%s\n", svar);


    return 0;
}
*/
