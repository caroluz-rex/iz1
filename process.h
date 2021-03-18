#ifndef IZ1_PROCESS_H
#define IZ1_PROCESS_H
#include "figures.h"

triangle* create_triangle ();
circle* calculate_circle(triangle *raw_triangle);
square* calculate_square(circle *circle_around);

#endif //IZ1_PROCESS_H
