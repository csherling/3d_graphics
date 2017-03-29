#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  struct matrix * transform;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);

  color color;
  color.red = MAX_COLOR;
  color.green = 0;
  color.blue = 0;

  clear_screen(s);
  
  /* print_matrix( make_bezier() ); */
  /* printf("\n"); */
  /* print_matrix( make_hermite() ); */


  /* if ( argc == 2 ) */
  /*   parse_file( argv[1], transform, edges, s ); */
  /* else */
  /*   parse_file( "stdin", transform, edges, s ); */

  /* add_box(edges,100,100,0,100,100,100); */
  
  /* add_sphere(edges,250,250,0,100,20); */

  /* add_torus(edges,250,250,0,50,200,200); */
  
  /* matrix_mult(make_rotY(M_PI/6),edges); */
  /* matrix_mult(make_rotX(M_PI/6),edges); */
  /* print_matrix(edges); */

  parse_file( "myscript", transform, edges, s );
  
  draw_lines(edges, s, color);
  display(s);
  save_extension(s, "pic1.png");
  
  free_matrix( edges );
  free_matrix( transform );
}  
