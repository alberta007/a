#ifndef __UTILS_H__
#define __UTILS_H__

#include <stdbool.h>
int read_string(char *buf, int buf_siz);
bool is_number(char *str);
int ask_question_int(char *question);
char *ask_question_string(char *question);
char *ask_question_shelf(char *question);
typedef union {
  int   int_value;
  float float_value;
  char *string_value;
} answer_t;
typedef answer_t (convert_func)(char *);
typedef bool (check_func)(char *);

#endif
