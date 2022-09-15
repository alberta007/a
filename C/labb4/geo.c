#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct point {
  int x, y;
};

struct rect {
  int uL; // upper left
  int lR; //lower right
};

typedef struct point point_t;

typedef struct rect rectangle_t;

point_t make_point(int x, int y) {
  point_t p = { .x = 10, .y = 7 };
  return p;
}

void print_point(point_t *p)
{
  printf("point(x=%d,y=%d)\n", p->x, p->y);
}

void print_rect( rectangle_t * y){
  point_t p1 = y->uL;
  point_t p2 = y->lR;
  printf("rectangle(upper_left = )" print_point(&p1); printf("\nrectangle(lower_right = )"); print_point(&p2));

  return p;
}

void main() {
  point_t p = { .x = 10, .y = 7 };
  print_point(&p);
  point_t p1 = print_rect(1, 2);
  point_t p2 = print_rect(1, 2);

}
