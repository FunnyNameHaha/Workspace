#include <stdio.h>
#include <math.h>

double calc_mebibyte(double megabyte);

int main ()
{
        double megabyte;
        double mebibyte;

        printf("Bitte Megabyteanzahl eingeben: ");
        scanf(" %lf", &megabyte);
        mebibyte = calc_mebibyte(megabyte);
        printf("Anzahl mebibyte: %f", mebibyte);

        return 0;
}

double calc_mebibyte(double megabyte) {
  double mebibyte;
  mebibyte = megabyte/pow(1.024, 2);
  return mebibyte;
}
