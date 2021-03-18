#include <stdlib.h>
#include "../include/freemem.h"

void free_figures(triangle *my_triangle, circle *my_circle, square *my_square) {
    free(my_triangle);
    free(my_circle);
    free(my_square);
}