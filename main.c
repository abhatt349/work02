#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 200;
  c.green = 0;
  c.blue = 100;

  clear_screen(s);

  //lines- tests for all quads

  //slope 0
  draw_line(0, 250, 500, 250, s, c);
  c.red = 100;
  c.green = 0;
  c.blue = 100;
  //slope undef
  draw_line(250, 0, 250, 500, s, c);
  c.red = 0;
  c.green = 0;
  c.blue = 100;
  //slope 1
  draw_line(0, 500, 500, 0, s, c);
  c.red = 0;
  c.green = 100;
  c.blue = 100;
  //slope -1
  draw_line(0, 0, 500, 500, s, c);
  c.red = 0;
  c.green = 100;
  c.blue = 200;

  //oct 1
  draw_line(250, 250, 350, 300, s, c);
  c.red = 100;
  c.green = 100;
  c.blue = 200;
  //oct 2
  draw_line(250, 250, 300, 400, s, c);
  c.red = 100;
  c.green = 200;
  c.blue = 200;
  //oct 3
  draw_line(250, 250, 200, 400, s, c);
  c.red = 200;
  c.green = 200;
  c.blue = 200;
  //oct 4
  draw_line(250, 250, 150, 300, s, c);
  c.red = 200;
  c.green = 200;
  c.blue = 100;
  //oct 5
  draw_line(250, 250, 150, 200, s, c);
  c.red = 200;
  c.green = 100;
  c.blue = 100;
  //oct 6
  draw_line(250, 250, 200, 100, s, c);
  c.red = 200;
  c.green = 0;
  c.blue = 100;
  //oct 7
  draw_line(250, 250, 300, 100, s, c);
  c.red = 200;
  c.green = 0;
  c.blue = 0;
  //oct 8
  draw_line(250, 250, 350, 200, s, c);
  c.red = 255;
  c.green = 255;
  c.blue = 255;
/*
  srand(time(NULL));
  int i;
  for(i = 0; i < 100; i++){
    c.red = rand() % 255;
    c.blue = rand() % 255;
    draw_line(rand() % 500, rand() % 500, rand() % 500, rand() % 500, s, c);
  }
*/
  int i;
  for (i = 200; i <= 300; i+=5) {
    draw_line(200, i, 300, i, s, c);
  }
  for (i = 200; i <= 300; i+=5) {
    draw_line(i, 200, i, 300, s, c);
  }


  save_ppm(s, "lines.ppm");
  printf("lines.ppm\n");
  //display(s);
  //save_extension(s, "lines.png");
}
