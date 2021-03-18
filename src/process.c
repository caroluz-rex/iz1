#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "../include/process.h"

triangle* create_triangle() {
    triangle *raw_triangle = malloc(sizeof(triangle));
    if (scanf("%f", &raw_triangle->a_side) !=1) {
        free(raw_triangle);
        return NULL;
    }
    if (raw_triangle->a_side <= 0) {
        free(raw_triangle);
        return NULL;
    }
    if (scanf("%f", &raw_triangle->b_side) !=1) {
        free(raw_triangle);
        return NULL;
    }
    if (raw_triangle->b_side <= 0) {
        free(raw_triangle);
        return NULL;
    }
    if (scanf("%f", &raw_triangle->c_side) !=1) {
        free(raw_triangle);
        return NULL;
    }
    if (raw_triangle->c_side <= 0) {
        free(raw_triangle);
        return NULL;
    }
    if (!((raw_triangle->a_side+raw_triangle->b_side > raw_triangle->c_side)
    &(raw_triangle->a_side+raw_triangle->c_side > raw_triangle->b_side)
    &(raw_triangle->b_side+raw_triangle->c_side > raw_triangle->a_side))) {
        free(raw_triangle);
        return NULL;
    }
    return raw_triangle;
}

circle* calculate_circle(triangle *raw_triangle) {
    float half_p = 0.0;
    half_p = 0.5*(raw_triangle->a_side+raw_triangle->b_side+raw_triangle->c_side);
    float radius_around = 0.0;
    radius_around = (raw_triangle->a_side*raw_triangle->b_side*raw_triangle->c_side)/
            (4*sqrtf((half_p-raw_triangle->a_side)*(half_p-raw_triangle->b_side)*(half_p-raw_triangle->c_side)));
    circle *circle_around = malloc(sizeof(circle));
    circle_around->radius = radius_around;
    return circle_around;
}

square* calculate_square(circle *circle_around) {
    square* square_around = malloc(sizeof(square));
    square_around->sq_side = 2*circle_around->radius;
    return square_around;
}
