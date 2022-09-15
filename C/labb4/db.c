#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "utils.h"
#include <stdlib.h>
#include <time.h>
struct item
{
    char * name;
    int price;
    char * shelf;
};

typedef struct item item_t;

void print_item(item_t* i)
{
    printf("Name: %s",i->name);
    printf("Desc: %s",i-> name);
    printf("Shelf: %s ",i->shelf);
    printf("Price: %d SEK",i->price);
}

void make_Item(char* name,int price, char* shelf)
{
    item_t r = { .name = name, .price = (price/100), .shelf = shelf};
}

void input_item()
{
  int buf_siz = 255;
  char buf[buf_siz];

    ask_question_string("Vad heter varan?");
    ask_question_int("vad kostar varan?");
    ask_question_shelf("var ligger varan?");

}

char ** magick(char **array1,char **array2, char **array3, int n)
{
   char buf[255];
   srand(time(NULL));
   int rannum1 = rand()% n;
   int rannum2 = rand()% n;
   int rannum3 = rand()% n;

   char *pick1 = array1[rannum1];
   char *pick2 = array2[rannum2];
   char *pick3 = array3[rannum3];

   snprintf (buf,255, "%s-%s %s",pick1,pick2,pick3);

   return strdup(buf);

}
/*
void main()
{
    char *array1[] = { "Laser",        "Polka",    "Extra" };
    char *array2[] = { "förnicklad",   "smakande", "ordinär" };
    char *array3[] = { "skruvdragare", "kola",     "uppgift" };

    char *name = magick(array1, array2, array3, 3);
}
*/

void print_menu() {
  fprintf(stdout, "[L]ägga till en vara \n[T]a bort en vara \n[R]edigera en vara \nÅn[g]ra senaste ändringenLista \n[h]ela varukatalogen [A]vsluta");
}


int main(int argc, char *argv[])
{
    char *array1[] = { "Laser",        "Polka",    "Extra" };
    char *array2[] = { "förnicklad",   "smakande", "ordinär" };
    char *array3[] = { "skruvdragare", "kola",     "uppgift" };

  if (argc < 2)
  {
    printf("Usage: %s number\n", argv[0]);
  }
  else
  {
    item_t db[16]; // Array med plats för 16 varor
    int db_siz = 0; // Antalet varor i arrayen just nu

    int items = atoi(argv[1]); // Antalet varor som skall skapas

    if (items > 0 && items <= 16)
    {
      for (int i = 0; i < items; ++i)
      {
        // Läs in en vara, lägg till den i arrayen, öka storleksräknaren
        item_t item = input_item();
        db[db_siz] = item;
        ++db_siz;
      }
    }
    else
    {
      puts("Sorry, must have [1-16] items in database.");
      return 1; // Avslutar programmet!
    }

    for (int i = db_siz; i < 16; ++i)
      {
        char *name = magick("Jag","sas","cool"); // TODO: Lägg till storlek
        char *desc = magick("Hej", "Najja", "Skrr"); // TODO: Lägg till storlek
        int price = rand() % 200000;
        char shelf[] = { rand() % ('Z'-'A') + 'A',
                         rand() % 10 + '0',
                         rand() % 10 + '0',
                         '\0' };
        item_t item = make_item(name, desc, price, shelf);

        db[db_siz] = item;
        ++db_siz;
      }

     // Skriv ut innehållet
     for (int i = 0; i < db_siz; ++i)
     {
       print_item(&db[i]);
     }

  }
  return 0;
}
