#include <stdio.h>
#include "../include/process.h"
#include "../include/freemem.h"

int main() {
    triangle *new_triangle = create_triangle();
    if (new_triangle == NULL) {
        printf("Wrong input");
    } else {
        circle *new_circle = calculate_circle(new_triangle);
        square *new_square = calculate_square(new_circle);
        printf("%f", new_square->sq_side);
        free_figures(new_triangle, new_circle, new_square);
    }
}
