#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

typedef struct _rec {
        double breite;
        double laenge;
} rectangle;

int rectangle_new(rectangle *r, double breite, double laenge);
int rectangle_check_breite(double breite);
int rectangle_check_laenge(double laenge);
int rectangle_set_breite(rectangle *r, double breite);
int rectangle_set_laenge(rectangle *r, double laenge);
double rectangle_get_breite(rectangle *r);
double rectangle_get_laenge(rectangle *r);

#endif
