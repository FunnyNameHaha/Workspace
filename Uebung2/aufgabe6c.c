#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double berechnen(double x);

int main(void)
{
        double x;
        double returnwert;

        printf("Bitte die Zahl eingeben: ");
        scanf("%lf", &x);
        returnwert = berechnen(x);
        printf("Resultat: %f", returnwert);

        return 0;
}

double berechnen(double x)
{
        double returnwert;
        returnwert = abs(x) * sin(x) * pow(10.0, -2.0);
        return returnwert;
}
