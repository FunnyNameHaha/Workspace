#include <stdio.h>

#define M_PI 3.14159265358979323846

double calc_circle_area(double radius);

double calc_mebibyte(double megabyte);

int main ()
{
  double radius;
  char b;
  char t;
  char z;
  int differenz;
  int temp1;
  int temp2;
  int a;
  double megabyte;
  double mebibyte;

  printf("------------------------------------------------\n");
  printf("Teilaufgabe A\n");
  printf("double arithmetischesMittel(int a, int b, int c)\n");

  printf("------------------------------------------------\n\n");
  printf("Teilaufgabe B\n");
  printf("BERECHNUNG DER KREISFLAECHE\n");
  printf("---------------------------\n");
  printf("Bitte einen Radius eingeben: ");
  scanf("%lf", &radius);
  printf("Der Flaecheninhalt eines Kreises mit Radius %f betraegt: %f\n\n",
  radius, calc_circle_area(radius));

  printf("------------------------------------------------\n");
  printf("Teilaufgabe C\n");
  printf("Zeichen eingeben: ");
  scanf(" %c", &b);
  a = (int)b;
  printf("%d\n\n", a);

  printf("------------------------------------------------\n");
  printf("Teilaufgabe D\n");
  printf("Eingabe Zeichen 1: \n");
  scanf(" %c", &t);
  temp1 = (int)t;
  printf("Eingabe Zeichen 2: \n");
  scanf(" %c", &z);
  temp2 = (int)z;

  if (temp1 > temp2) {
    differenz = temp1 - temp2;
  } else {
    differenz = temp2 - temp1;
  }
  printf("Zeichen zwischen den beiden ASCII Zeichen: %d\n\n", differenz);

  printf("------------------------------------------------\n");
  printf("Teilaufgabe E\n");
  printf("Bitte Megabyteanzahl eingeben: ");
  scanf(" %lf", &megabyte);
  mebibyte = calc_mebibyte(megabyte);
  printf("Anzahl mebibyte: %f", mebibyte);


  return 0;
}

double calc_circle_area(double radius)
{
  double flaecheninhalt = M_PI*radius*radius;
  return flaecheninhalt;
}

double calc_mebibyte(double megabyte) {
  double mebibyte;
  mebibyte = megabyte*1.024;
  return mebibyte;
}
