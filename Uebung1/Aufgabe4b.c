#include <stdio.h>

#define M_PI 3.14159265358979323846

double calc_circle_area(double radius);

int main ()
{
        double radius;
        printf("BERECHNUNG DER KREISFLAECHE\n");
        printf("---------------------------\n");
        printf("Bitte einen Radius eingeben: ");
        scanf("%lf", &radius);
        printf("Der Flaecheninhalt eines Kreises mit Radius %f betraegt: %f",
        radius, calc_circle_area(radius));
        return 0;
}

double calc_circle_area(double radius)
{
  double flaecheninhalt = M_PI*radius*radius;
  return flaecheninhalt;
}
