/// cat.c
#include <stdio.h>

void cat(char *filename)
{
  FILE *f = fopen(filename, "r");
  fprintf(stdout,"%d",1);
  int c = fgetc(f);
  int i = 1;


  while (c != EOF)
  {
    if (c == '\n') {
      fprintf(stdout,"%d",i);
      i++;
    }
    fputc(c, stdout);
    c = fgetc(f);
  }

  fclose(f);
}

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    fprintf(stdout, "Usage: %s fil1 ...\n", argv[0]);
  }
  else
  {
    for (int i = 1; i < argc; ++i)
    {
      cat(argv[i]);
    }
  }

  return 0;
}
