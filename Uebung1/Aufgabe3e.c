#include <stdio.h>
#include <math.h>

int main (int argc, char * argv[])
{
        double number = argc - 1;
        printf("Quadratwurzel aus der Anzahl der Parameter: %.2f", sqrt(number));
        return 0;
}
