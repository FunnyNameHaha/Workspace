#include <stdio.h>
#include <math.h>

double berechnung(double zahl1, double zahl2);

int main(void)
{
        double zahl1;
        double zahl2;
        double ergebnis;

        printf("Bitte die erste Zahl eingeben: ");
        scanf("%lf", &zahl1);
        printf("Bitte die zweite Zahl eingeben: ");
        scanf("%lf", &zahl2);

        ergebnis = berechnung(zahl1, zahl2);
        printf("Das Ergebnis: %.3f", ergebnis);

        return 0;
}

double berechnung(double zahl1, double zahl2)
{
        double temp;
        temp = exp(zahl1 + zahl2);
        return temp;
}
